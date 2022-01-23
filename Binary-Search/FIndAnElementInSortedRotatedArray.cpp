#include<iostream>
using namespace std;

int findMinElement(int *arr, int n){
    int s = 0;
    int e = n - 1;
    while(s <= e) {
        int mid = s + ((e-s)/2);
        int prev = (mid + 1)%n;
        int next = (mid+n-1)%n;
        if(arr[mid] < arr[prev] && arr[mid] < arr[next]) return mid;
        if(arr[s] <= arr[mid]) {
            s = mid+1;
        }else e = mid-1;
    }
    return -1;
}

int main(){
    // 
    //2,5,6,8,11,12,13,15;
    //2,5,11,12,13,15
    //In this quetstion the logic will be to search for the minimum element index and return;
    // to search for the min element index through binary search, will see if mid < prev && mid < next then this is the 
    //min elment and if this is not the case then will move towards the unsorted array.
    int arr[] = {11,12,2,5};
    cout<< findMinElement(arr, 6) << endl ;
    return 0;
}