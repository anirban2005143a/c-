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
    else if (data > root->data)
    {
        root->right = insertTree(root->right, data);
    }
    else
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

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

void levelOrder(Node *root)
{
    if (root == nullptr)
        return;

    // Create an empty queue for level order traversal
    queue<Node *> q;

    // Enqueue Root
    q.push(root);

    while (q.empty() == false)
    {

        // Print front of queue and remove it from queue
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        // Enqueue left child
        if (node->left != nullptr)
            q.push(node->left);

        // Enqueue right child
        if (node->right != nullptr)
            q.push(node->right);
    }
}

int main()
{

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // enterKey(root);

    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    levelOrder(root);

    return 0;
}