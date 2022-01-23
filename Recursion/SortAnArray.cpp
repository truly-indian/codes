#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int>&v, int temp){
    if(v.size() == 0 || v[v.size() - 1 ] <= temp) {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
}

void sortArray(vector<int> &v) {
    if(v.size() == 1) return;
    int temp = v[v.size() - 1];
    v.pop_back();
    sortArray(v);
    insert(v, temp);
}

void printArray(vector<int> &v){
    for(int i=0; i < v.size(); i+=1) cout<<v[i]<<",";
}

int main(){
    vector<int>v{5,1,3,4,2};
    sortArray(v);
    printArray(v);
    return 0;
}