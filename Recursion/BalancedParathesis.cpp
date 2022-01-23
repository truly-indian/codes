#include<iostream>
#include<cstring>
using namespace std;

void balanceParanthesis(int open, int close, string op) {
    if(open == 0 && close == 0) {
        cout<< op <<endl;
        return;
    }
    if( open != 0 ) {
        string op1 = op + '(';
         balanceParanthesis(open-1, close, op1);
    }
    if( close > open ){
        string op2 = op + ')';
         balanceParanthesis(open, close - 1, op2);
    }
    return;
}

int main(){
    int open = 3;
    int close = 3;
    string op = "";
    balanceParanthesis(open, close, op);
    return 0;
}