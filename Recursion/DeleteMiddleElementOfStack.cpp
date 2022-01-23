#include<iostream>
#include<stack>
using namespace std;


void delMiddle(stack<int> &s, int k) {
    if(k == 1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    delMiddle(s, k-1);
    s.push(temp);
    return;
}

stack<int> deleteMiddleElement(stack<int> &s, int size){
    if(s.size() == 0) return s;
    int k = (s.size()/2) + 1;
    delMiddle(s, k);
    return s;
}

void printStack(stack<int> s){
    while(!s.empty()) {
        cout<<s.top()<<",";
        s.pop();
    }
}

int main(){ 
    stack<int> s;
    s.push(4);
    s.push(1);
    s.push(5);
    s.push(2);
    s.push(3);
    deleteMiddleElement(s, 5);
    printStack(s);
    return 0;
}