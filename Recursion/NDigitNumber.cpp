#include<iostream>
using namespace std;

void solve(int n, int zero, int one, string op){
    if( n == 0 ) {
        cout<< op << endl;
        return;
    } 
    string op1 = op + '1';
    solve(n-1, zero, one+1, op1);
    if( one > zero ) {
        string op2 = op + '0';
        solve(n-1, zero+1, one, op2);
    }
}

int main(){
    int n = 3;
    int zero = 0;
    int one = 0;
    string op = "";
    solve(n, zero, one, op);
    return 0;
}