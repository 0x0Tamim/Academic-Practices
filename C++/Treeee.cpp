#include<iostream>
using namespace std;

struct TreeNode {

  int value;
  TreeNode *left = nullptr;
  TreeNode *right = nullptr;

  TreeNode(int val): value(val), left(nullptr), right(nullptr){}

};

TreeNode *insert(TreeNode *root, int val){

   if(root == nullptr){
    return new TreeNode(val);
  }

  if(val<root->value){

    root->left = insert(root->left,val);
  }

  else if(val>root->value){

    root->right = insert(root->right,val);
  }

  return root;

}

void inorder(TreeNode *root){
if (root == nullptr)
    return;
inorder(root->left);
cout<<root->value<<" ";
inorder(root->right);

}

void preorder(TreeNode *root){
if (root == nullptr)
    return;

cout<<root->value<<" ";
preorder(root->left);
preorder(root->right);
}
void postorder(TreeNode *root){
if (root == nullptr)
    return;

postorder(root->left);
postorder(root->right);
cout<<root->value<<" ";
}

 int main(){

 TreeNode *root = nullptr;
 root = insert(root,50);
 root = insert(root,30);
 root = insert(root,70);
 root = insert(root,20);
 root = insert(root,40);
 root = insert(root,60);
 root = insert(root,80);

 cout << "\nTree Traversals:\n";

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << "\n";

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << "\n";

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << "\n";

    return 0;
}





