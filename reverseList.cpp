#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }

    Node *reverseList(Node *root)
    {
        Node *temp = root;
        if (temp == nullptr)
            return root;

        Node *prev = nullptr;

        while (temp != nullptr)
        {
            Node *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    Node *recursiveRev(Node * head)
    {
        if (head->next == nullptr || head == nullptr )
            return head;

        Node *newHead = recursiveRev(head->next);
        Node * ++++++ = head->next;
        front->next= head;
        head->next = nullptr;
        return newHead;
    }

    void printList(Node *root)
    {
        Node *temp = root;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{

    Node *root = new Node(1);
    root->next = new Node(2);
    root->next->next = new Node(3);
    root->next->next->next = new Node(4);
    root->next->next->next->next = new Node(5);
    root->next->next->next->next->next = new Node(6);

    root = root->reverseList(root);
    root->printList(root);
cout<<endl;
    root = root->recursiveRev(root);

    root->printList(root);

    return 0;
}
