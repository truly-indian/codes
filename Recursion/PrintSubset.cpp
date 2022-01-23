#include<iostream>
using namespace std;

void printSubset(string ip, string op) {
     if(ip.size() == 0) {
         cout<<op<<endl;
         return;
     }   
     string op1 = op + ip[0]; 
     string op2 = op;
     ip.erase(ip.begin()+ 0 );
     printSubset(ip, op1);
     printSubset(ip, op2);    
}

int main(){
    string ip = "abc";
    string op = "";
    printSubset(ip, op);
    return 0;
}