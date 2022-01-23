#include<iostream>
using namespace std;

int firstOccurence(int *arr, int n, int k){
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = s + ((e-s)/2);
        if( arr[mid] == k ) {
            ans = mid;
            e = mid-1;
        }
        if(arr[mid] < k) {
            s = mid+1;
        } else e = mid-1;
    }
    return ans;
}

int lastOccurrence(int *arr, int n, int k){
    int ans = -1;
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = s + ((e-s)/2);
        if(arr[mid] == k) {
           ans = mid;
           s = mid+1;     
        }
        if(arr[mid] < k){
            s = mid+1;
        }else e = mid-1;
    }
    return ans;
}

int countOfKthElement(int lastOccurrence, int firstOccurence){
    return lastOccurrence - firstOccurence;
}

int main(){
    int arr[] = {8,8,8,10,10,18};
    int n = 6;
    int k= 18;
    cout<< firstOccurence(arr, n, k);
    cout << lastOccurrence(arr, n, k);
    cout<<countOfKthElement(lastOccurrence(arr, n, k), firstOccurence(arr, n, k)) + 1;
    return 0;
}