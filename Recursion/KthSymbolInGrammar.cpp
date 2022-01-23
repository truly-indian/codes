#include<iostream>
#include<cmath>
using namespace std;

int kthGrammar(int n, int k){
    if(n == 1 && k == 1) return 0;
    int mid = (pow(2, n-1)) / 2;
    if( k <= mid) return kthGrammar(n-1, k);
    else return !kthGrammar(n-1, k-mid);
}

int main(){
    int n = 2, k= 1;
    cout<< kthGrammar(n,k);
    return 0;
}