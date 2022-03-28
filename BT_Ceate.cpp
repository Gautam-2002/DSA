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

// void levelOrderTraversal(node *root)
// {   cout<<"Level Order Traversel:"<<endl;
//     queue<node *> q;
//     q.push(root);
//     q.push(NULL);
//     while (!q.empty())
//     {
//         node *temp = q.front();

//         q.pop();
//         if (temp == NULL)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(NULL);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";
//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

int main()
{
    node *root = NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    // levelOrderTraversal(root);
    return 0;
}