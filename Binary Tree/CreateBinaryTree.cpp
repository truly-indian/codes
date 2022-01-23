#include<iostream>
using namespace std;

class Node{
  public: 
  int data;
  Node* left;
  Node* right;

  Node(int d) {
      data = d;
      right = NULL;
      left = NULL;
  }
}; 

Node * buildTree(){
   int d;
   cin>>d;
   if(d == -1) return NULL;
   Node *root = new Node(d);
   root->left = buildTree();
   root->right = buildTree();
   return root;
}

void printPreOrder(Node *root) {
    if(root == NULL) return;
    cout<<root->data<<endl;
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printPostOrder(Node *root){
  if(root == NULL) return;
  printPostOrder(root->left);
  printPostOrder(root->right);
  cout<<root->data<<endl;
}

void printInOrder(Node * root){
  if(root == NULL) return;
  printInOrder(root->left);
  cout<<root->data;
  printInOrder(root->right);
}

int main(){

 Node* root = buildTree();
 printPreOrder(root);
 
}