#include <bits/stdc++.h>
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
};

int height(Node *node)
{
  if (node == nullptr)
    return 0;
  return node->height;
}

int getBalance(Node *node)
{
  if (node == nullptr)
    return 0;
  return (height(node->left) - height(node->right));
}

Node *rightRotation(Node *node)
{
  Node *x = node->left;
  Node *y = x->right;

  x->right = node;
  node->left = y;

  node->height = 1 + max(height(node->left), height(node->right));
  x->height = 1 + max(height(x->left), height(x->right));

  return x;
}

Node *getMinnode(Node *node)
{
  Node *temp = node;
  while (temp->left != nullptr)
  {
    temp = temp->left;
  }
  return temp;
}

Node *leftRotation(Node *node)
{
  Node *x = node->right;
  Node *y = x->left;

  x->left = node;
  node->right = y;

  node->height = 1 + max(height(node->left), height(node->right));
  x->height = 1 + max(height(x->left), height(x->right));

  return x;
}

Node *insert(Node *node, int key)
{
  if (node == nullptr)
  {
    return new Node(key);
  }

  if (key > node->data)
  {
    node->right = insert(node->right, key);
  }
  else if (key < node->data)
  {
    node->left = insert(node->left, key);
  }
  else
  {
    return node;
  }

  node->height = 1 + max(height(node->left), height(node->right));

  int bf = getBalance(node);

  if (bf > 1 && key < node->left->data)
  {
    return rightRotation(node);
  }

  if (bf < -1 && key > node->right->data)
  {
    return leftRotation(node);
  }

  if (bf > 1 && key > node->left->data)
  {
    node->left = leftRotation(node->left);
    return rightRotation(node);
  }

  if (bf < -1 && key < node->right->data)
  {
    node->right = rightRotation(node->right);
    return leftRotation(node);
  }
  return node;
}

Node *deletetion(Node *node, int key)
{
  if (node == nullptr)
  {
    return node;
  }

  if (key < node->data)
  {
    node->left = deletetion(node->left, key);
  }
  else if (key > node->data)
  {
    node->right = deletetion(node->right, key);
  }
  else
  {
    if (node->left == nullptr || node->right == nullptr)
    {
      Node *temp = node->left ? node->left : node->right;

      if (temp == nullptr)
      {
        temp = node;
        node = nullptr;
      }
      else
      {
        *node = *temp;
      }
      delete temp;
    }
    else
    {
      Node *temp = getMinnode(node->right);

      node->data = temp->data;

      node->right = deletetion(node->right, temp->data);
    }
  }

  if (node == nullptr)
    return node;

  node->height = 1 + max(height(node->left), height(node->right));

  int bf = getBalance(node);

  if (bf > 1 && getBalance(node->left) >= 0)
  {
    return rightRotation(node);
  }

  if (bf > 1 && getBalance(node->left) < 0)
  {
    node->left = leftRotation(node->left);
    return rightRotation(node);
  }

  if (bf < -1 && getBalance(node->right) > 0)
  {
    node->right = rightRotation(node->right);
    return leftRotation(node);
  }

  if (bf < -1 && getBalance(node->right) <= 0)
  {
    return leftRotation(node);
  }

  return node;
}

void preOrder(Node *node)
{
  if (node != nullptr)
  {
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
  }
}

int main()
{

  Node *root = nullptr;

  root = insert(root, 9);
  root = insert(root, 5);
  root = insert(root, 10);
  root = insert(root, 0);
  root = insert(root, 6);
  root = insert(root, 11);
  root = insert(root, -1);
  root = insert(root, 1);
  root = insert(root, 2);

  cout << "Preorder traversal of the "
          "constructed AVL tree is \n";
  preOrder(root);

  root = deletetion(root, 10);

    cout << "\nPreorder traversal after"
            " deletion of 10 \n";
    preOrder(root);

  return 0;
}