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

Node* minVal(Node* root){
    Node* temp = root;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;    
}
Node* maxVal(Node* root){
    Node* temp = root;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;    
}
int main()
{
    Node *root = NULL;

    cout << "Enter Data to create BST" << endl;
    takeInput(root);
    cout<<"Minval:"<<minVal(root)->data<<endl;
    cout<<"Maxval:"<<maxVal(root)->data<<endl;
    return 0;
}