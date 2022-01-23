#include<iostream>
using namespace std;

void permuteWithSpace(string ip, string op){
    if(ip.size() == 0) {
        cout<<op<<endl;
        return;
    }
    // op1 will with spaces 
    string op1 = op + " " + ip[0];
    // op2 will not have spaces
    string op2 = op + ip[0];
    ip.erase(ip.begin() + 0);
    permuteWithSpace(ip, op1);
    permuteWithSpace(ip, op2);
    return;
}

int main(){
    string ip = "abc";
    string op = "";
    op = ip[0];
    ip.erase(ip.begin() + 0);
    permuteWithSpace(ip, op);
    return 0;
}