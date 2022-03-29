#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        left = NULL;
        right = NULL;
    };
};

node *buildTree(node *root)
{
    cout << "Data:" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "In Left:" << endl;
    root->left = buildTree(root->left);
    cout << "In Right:" << endl;
    root->right = buildTree(root->right);
    return root;
}

void inorder(node* root){
    if (root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node *root = NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    inorder(root);
    return 0;
}