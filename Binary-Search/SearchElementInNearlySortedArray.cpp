#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int k){
    int s = 0;
    int e = n-1;
    while(s <= e ){
        int mid = s + ((e-s)/2);
        if(arr[mid] == k ) return mid;
        if(mid+1 <= e && arr[mid+1] == k) return mid+1;
        if(mid - 1 >= s && arr[mid-1] == k) return mid-1;
        if(arr[mid] < k) s = mid+2;
        else e = mid-2; 
    }
    return -1;
}

int main(){
    int arr [] = {5,10,30,20,40};
    int k = 20;
    //nearly sorted array means that the element could be present at i, i+1, i-1 index.
    cout << binarySearch(arr, 5, k);
    return 0;
}