#include<iostream>
using namespace std;

int find( int *arr, int k, int n){
    int s = 0;
    int e = n;
    while(s <= e ) {
        int mid = s + ((e-s)/2);
        if(arr[mid] == k) return arr[mid] - k;
        if(arr[mid] < k ) {
            s = mid+1;
        }else e = mid - 1;
    }
    int op1 = abs(k-arr[s]);
    int op2 = abs(k-arr[e]);
    return min(op1,op2);
}

int main(){
    int arr [] = {10,20,50,80,90,100};
    int k = 70;
    cout << find(arr, k, 5) << endl;
    return 0;
}