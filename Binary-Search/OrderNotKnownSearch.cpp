#include<iostream>
using namespace std;

int binarySearch(int *arr, int k, int n){
    int s = 0;
    int e = n-1;
    while(s <= e) {
        int mid = s + ((e-s)/2);
        if( arr [ mid] == k ) return mid;
        if(arr [mid ] < arr[mid-1] && mid!=0) {
            //descending order
            if(arr[mid] > k) s = mid+1;
            else e = mid-1;
        }
        else {
            //ascending order: 
            if(arr[mid] > k && mid!=0 ) e = mid-1;
            else s = mid+1;
        }
    }
    return 0;
}

int main(){
    int arr [] = {5,4,3,2,1};
    int n = 5;
    int k = 1;
    cout << binarySearch(arr, k , n) << endl;
    return 0;
}