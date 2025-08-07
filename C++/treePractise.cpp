#include<iostream>
using namespace std;

struct TreeNode{

      int value;
      TreeNode *left;
      TreeNode *right;

    TreeNode(int val): value(val), left(nullptr), right(nullptr){}

};

int main(){

TreeNode *root = new TreeNode(10);
root->left = new TreeNode(5);
root->right = new TreeNode(2);

cout<<"Root = "<<root->value<<endl;
cout<<"Left child = "<<root->left->value<<endl;
cout<<"Right child = "<<root->right->value<<endl;


}
