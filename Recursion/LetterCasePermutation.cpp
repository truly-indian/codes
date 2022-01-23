#include<iostream>
#include<cctype>
using namespace std;


void letterCasePermute(string ip, string op){
    if( ip.size() == 0 ) {
        cout<<op<<endl;
        return;
    }
    // check whether it is a letter or not.
    if(isdigit(ip[0])) {
        char str = ip[0];
        ip.erase(ip.begin() + 0);
        letterCasePermute(ip, op+str);
        return;
    }
    // if it is not a digit
    char str = toupper(ip[0]);
    char str2 = tolower(ip[0]);
    string op1 = op + str; 
    string op2 = op + str2;
    ip.erase(ip.begin() + 0);
    letterCasePermute(ip, op1);
    letterCasePermute(ip, op2);
    return;
}

int main(){
    string ip = "a1B2";
    string op = "";
    letterCasePermute(ip, op);
    return 0;
}