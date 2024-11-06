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
Node *insertTree(Node *&root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }

    if (data > root->data)
    {
        root->right = insertTree(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = insertTree(root->left, data);
    }

    return root;
}

void enterKey(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertTree(root, data);
        cin >> data;
    }
}

Node *minNode(Node *&root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxNode(Node *&root)
{
    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteNode(Node *&root, int key)
{
    if (root == NULL)
        return root;


    if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }

    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }

    if (root->data == key)
    {
        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1child

        // left child
        if (root->left != NULL && root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        // right child
        if (root->right != NULL && root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if (root->right != NULL && root->left != NULL)
        {
            int min = minNode(root->right)->data;
            root->data = min;
            root->right = deleteNode(root->right, min);
            return root;
        }
    }

}

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{

    Node * root = NULL;

    enterKey(root);

    inOrder(root);

    deleteNode(root , 12);

    cout<<endl;

    inOrder(root);

    return 0;
}