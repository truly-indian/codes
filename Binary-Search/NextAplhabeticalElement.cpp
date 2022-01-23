#include<iostream>
using namespace std;

int main(){
    // find the next letter after the key.
     char arr[] = {'a','c','f','h'};
     int key = 'c';
     int s = 0;
     int e = 3;
     char ans;
     while(s <= e) {
         int mid = s + (e - s)/2;
         if(arr[mid] == key) {
             s =  mid + 1;
         }else if(arr[mid] > key) {
           ans = arr[mid];
           e = mid - 1;
         }else {
             s = mid + 1;
         }
     }
     cout<<ans<<endl;
    return 0;
}