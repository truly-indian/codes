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

int binarySearch(int *arr, int s, int e, int k){
    while( s <= e ) {
        int mid = s + ((e-s)/2);
        if(arr[mid] == k) {
            return mid;
        }
        if(arr[mid] < k) s = mid+1;
        else e = mid - 1;
    }
    return -1;
}

int main(){
    //{2,5,6,8,11,12,13,15};
    //{8,11,12,13,15,2,5,6};
    int arr[] = {11,12,2,5};
    int k = 2;
    int minElement = findMinElement(arr, 4);
    int ans1 = binarySearch(arr, 0 ,minElement-1, k);
    int ans2 = binarySearch(arr, minElement, 3, k);
    if(ans1!=-1) cout<< ans1 << endl;
    else cout<< ans2 << endl; 
    return 0;
}