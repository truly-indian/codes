#include<iostream>
using namespace std;

void printTowerOfHanoi(int n, char s, char d, char h){
    if(n == 1) {
        cout<<"moving: "<<n<< "th plate from: "<<s<<" to: "<<d<<endl;
        return;
    }
    printTowerOfHanoi(n-1, s, h, d);
    cout<<"moving: "<<n<<"th plate from: "<<s<<" to: "<<d<<endl;
    printTowerOfHanoi(n-1, h,d,s);
}

int main(){
    int n = 1000;
    char s = 'A', h = 'B', d = 'C';
    printTowerOfHanoi(n,s,d,h);
    return 0;
}