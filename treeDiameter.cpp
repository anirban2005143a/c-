#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    int height;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
        height = 1;
    }

    int heightOfNode(Node *node)
    {
        if (node == nullptr || (node->left==nullptr && node->right==nullptr))
            return 0;
        int hl = heightOfNode(node->left);
        int hr = heightOfNode(node->right);
    
        return 1 + max(hl, hr);
    }

   /* brute force aproach


    int getDia(Node * node){
        if(node == nullptr)
        return 0;
        int lh = node->left ? heightOfNode(node->left) + 1 : 0;
        int rh = node->right ? heightOfNode(node->right) + 1 : 0;
        
        return lh+rh;
    }

    int maxDia(Node *root)
    {   
       if(root != nullptr){
        int path = getDia(root);
        
        int dial = maxDia(root->left);
        int diar = maxDia(root->right);

        return max(path , max(dial ,diar));
       }
        
    }

   */ 
};

int main()
{
    int maxSum = 0 ; 
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);
    root->left->right->right->left = new Node(10);
    root->right = new Node(3);
    root->right->left = new Node(8);
    root->right->right = new Node(9);

    // cout<<root->maxDia(root)<<" ";

    return 0;
}