#include<iostream>
using namespace std;

int main(){
    
    return 0;
}

/*
In this question take s = 0, and end = 1(1th index). and then keep checking whether the key needs to be 
searches is between this range or not. if not then make current end as start and end = end*2. Again check if key is between this new range or not
if yes then apply binary search and if not then keep chaing the current start and current end. 
*/