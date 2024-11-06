#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * left;
    Node * right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void levelOrder(Node * node){
    queue<Node * >q;
    q.push(node);

    while (!q.empty())
    {
        Node * temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
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
    root->right->right = new Node(9);

    levelOrder(root);

    return 0;
}