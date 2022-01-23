#include<iostream>
#include<stack>
using namespace std;


void insert(stack<int> &s, int temp){
    if(s.size() == 0 ) {
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}

void reverseStack(stack<int> &s){
    if(s.size() == 0) return;
    int temp = s.top();
    s.pop();
    reverseStack(s);
    insert(s, temp);
}


void printStack(stack<int> s){
    cout<<"stack size: "<<s.size();
    while(!s.empty()) {
        cout<<s.top()<<",";
        s.pop();
    }
}

int main(){ 
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"stack before reverse: "<<endl;
    printStack(s);
    cout<<"stack after reverse: "<<endl;
    reverseStack(s);
    printStack(s);
    return 0;
}