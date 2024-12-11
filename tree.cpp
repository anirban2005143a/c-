#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;

    Tree(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }

    Tree *insert(Tree *&root, int key)
    {
        if (root == nullptr)
            return new Tree(key);

        if (key > root->data)
            root->right = insert(root->right, key);
        else if (key < root->data)
            root->left = insert(root->left, key);

        return root;
    }

    Tree *minNode(Tree *root)
    {
        Tree *temp = root;
        while (temp->left != nullptr)
        {
            temp = temp->left;
        }
        return temp;
    }

    Tree *deletetion(Tree *root, int key)
    {
        if (root == nullptr)
            return root;

        if (key > root->data)
            root->right = deletetion(root->right, key);
        else if (key < root->data)
            root->left = deletetion(root->left, key);
        else if (key == root->data)
        {

            // 0 child
            if (root->left == nullptr && root->right == nullptr)
            {
                delete root;
                return nullptr;
            }

            // 1 child
            /*only left child*/
            if (root->left != nullptr && root->right == nullptr)
            {
                Tree *temp = root->left;
                delete root;
                return temp;
            }

            /* only right child */
            if (root->left == nullptr && root->right != nullptr)
            {
                Tree *temp = root->right;
                delete root;
                return temp;
            }

            // 2 child
            if (root->left != nullptr && root->right != nullptr)
            {
                Tree *temp = minNode(root->right);
                root->data = temp->data;
                root->right = deletetion(root->right, temp->data);
                return root;
            }
        }
    }

    void preOrder(Tree *root)
    {
        if (root == nullptr)
            return;
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    void inOrder(Tree *root)
    {
        if (root != nullptr)
        {
            inOrder(root->left);
            cout << root->data << " ";
            inOrder(root->right);
        }
    }

    void postOrder(Tree *root)
    {
        if (root != nullptr)
        {
            postOrder(root->left);
            postOrder(root->right);
            cout << root->data << " ";
        }
    }

    void preOrder_itratetive(Tree *root)
    {
        if (root == nullptr)
            return;
        Tree *temp = root;
        stack<Tree *> s;
        s.push(root);
        while (!s.empty())
        {
            Tree *temp = s.top();
            s.pop();
            cout << temp->data << " ";
            if (temp->right)
                s.push(temp->right);
            if (temp->left)
                s.push(temp->left);
        }
    }

    void inOrder_itratetive(Tree *root)
    {
        if (root == nullptr)
            return;

        stack<Tree *> s;
        s.push(root);

        while (!s.empty())
        {
            if (s.top() == nullptr)
            {
                s.pop();
                Tree *temp = s.top();
                s.pop();
                cout << temp->data << " ";
                if (temp->right)
                    s.push(temp->right);
            }
            else
            {
                if (s.top()->left != nullptr || s.top()->right != nullptr)
                {
                    Tree *temp = s.top();
                    s.push(nullptr);
                    if (temp->left != nullptr)
                        s.push(temp->left);
                }
                else
                {
                    cout << s.top()->data << " ";
                    s.pop();
                }
            }
        }
    }

    void postOrder_itratetive(Tree *root)
    {
        if (root == nullptr)
            return;

        stack<Tree *> s;
        s.push(root);

        while (!s.empty())
        {
            if (s.top() == nullptr)
            {
                s.pop();
                Tree *temp = s.top();
                s.pop();
                cout << temp->data << " ";
            }
            else
            {
                if (s.top()->left != nullptr || s.top()->right != nullptr)
                {
                    Tree *temp = s.top();
                    s.push(nullptr);
                    if (temp->right)
                        s.push(temp->right);
                    if (temp->left)
                        s.push(temp->left);
                }
                else
                {
                    cout << s.top()->data << " ";
                    s.pop();
                }
            }
        }
    }
};

int main()
{

    Tree *root = nullptr;

    root = root->insert(root, 10);
    root = root->insert(root, 12);
    root = root->insert(root, 5);
    root = root->insert(root, 6);
    root = root->insert(root, 15);
    root = root->insert(root, 7);
    root = root->insert(root, 8);
    root = root->insert(root, 9);
    root = root->insert(root, 1);
    root = root->insert(root, 14);

    root->postOrder(root);
    cout << endl;

    root->postOrder_itratetive(root);
    cout << endl;

    return 0;
}
