#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void permuteCaseChange(string ip, string op){
    if( ip.size() == 0 ) {
        cout<<op<<endl;
        return;
    }
    char str = toupper(ip[0]);
    string op1 = op + str;
    string op2 = op + ip[0];
    ip.erase(ip.begin()+0);
    permuteCaseChange(ip, op1);
    permuteCaseChange(ip, op2);
    return;
}

int main(){
    string ip = "abc";
    string op = "";
    permuteCaseChange(ip, op);
    return 0;
}