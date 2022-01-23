#include<iostream>
using namespace std;

int search(int arr[], int k, int n){
    int s = 0;
    int e = n-1;
    
    int mid = (s+e)/2;
    while(s <= e) {
        mid = (s+e)/2;
        if(arr[mid] == k) {
        return mid;
        }
        if(arr[mid] > k) s = mid+1;
        else e = mid-1;
    }
    return 0;
}

int main(){
    int arr[5] = {5,4,3,2,1};
    int k = 4;
    cout<< search(arr, k, 5) << endl;
    return 0;
}

