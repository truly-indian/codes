#include<iostream>
using namespace std;
//this algortihm is also known as binary search on answer: 

int find(int *arr, int n){
    int s = 0;
    int e = n-1;
    while(s <= e ) {
            int mid = s + ((e-s)/2);
            if(mid > 0 && mid < n-1) {
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            if(arr[mid] > arr[mid-1]) s= mid+1;
            else e = mid-1; 
            }
            else if(mid == 0) {
                if(arr[mid] > arr[mid+1]) return 0;
                else return -1;
            }
            else if(mid == n-1) {
                if(arr[mid] > arr[mid-1]) return n-1;
                else return -1;
            }
    }
    return -1;
}
int main(){
    int arr[]  ={5,10,20,15};
    cout << find(arr, 4) << endl;
    return 0;
}