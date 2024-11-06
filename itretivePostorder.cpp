#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};


//not optimized code
// void itretivePostOrder(Node *node)
// {
//     if (node != nullptr)
//     {

//         stack<Node *> s;
//         s.push(node);

//         while (!s.empty())
//         {   
            
//             if (node == nullptr)
//             {
//                 s.pop();
//                 cout << s.top()->data << " ";
//                 s.pop();
//                 if (!s.empty())
//                     node = s.top();
//             }
//             else
//             {
//                 if (node->left || node->right)
//                 {
//                     s.push(nullptr);

//                     if (node->left)
//                         s.push(node->left);

//                     if (node->right)
//                         s.push(node->right);

//                     node = node->right ? node->right : node->left;
//                 }
//                 else
//                 {
//                     cout << s.top()->data << " ";
//                     s.pop();
//                     if (!s.empty())
//                         node = s.top();
//                 }
//             }
//         }
//     }
// }

void itretivePostOrder(Node * node){
    if(node!= nullptr){
        stack<Node * > s;
        stack<Node*>res;

s.push(node);
        while (!s.empty())
        {
            Node * temp = s.top();
            s.pop();
            res.push(temp);
            if(temp->left) s.push(temp->left);
            if(temp->right) s.push(temp->right);
        }

        while (!res.empty())
        {
            cout<<res.top()->data<<" ";
            res.pop();
        }
    }
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);
    root->right = new Node(3);
    root->right->left = new Node(8);
    root->right->left->right = new Node(7);
    root->right->right = new Node(9);

    itretivePostOrder(root);

    return 0;
}