#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *&root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        insertIntoBST(root, data);
        cin >> data;
    }
}

bool searchInBST(Node *root, int x)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == x)
    {
        return true;
    }
    if (root->data > x)
    {
        return searchInBST(root->left, x);
    }
    else
    {
        return searchInBST(root->right, x);
    }
}

int main()
{
    Node *root = NULL;

    cout << "Enter Data to create BST" << endl;
    takeInput(root);
    int x;
    cout<<endl<<"Enter no. You want to search :"<<endl;
    cin>>x;
    cout<<searchInBST(root,x);
    return 0;
}