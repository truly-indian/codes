#include<iostream>
#include<unordered_map>
using namespace std;


void printSubset(string ip, string op, unordered_map<string, bool> &m) {
     if(ip.size() == 0) {
         m.insert(make_pair(op, true));
         return;
     }   
     string op1 = op + ip[0]; 
     string op2 = op;
     ip.erase(ip.begin()+ 0 );
     printSubset(ip, op1, m);
     printSubset(ip, op2, m);    
}

void printUnorderedMap(unordered_map<string, bool> &m) {
     unordered_map<string, bool>::iterator i;
     for(i: m) {
         cout<<i.first<<endl;
     }   
}

int main(){
    string ip = "abc";
    string op = "";
    unordered_map<string, bool> m;
    printSubset(ip, op, m);
    printUnorderedMap(m);
    return 0;
}