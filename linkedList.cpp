#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertATEnd(node *&head, int val)
{
    node *newNode = new node(val);

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void printList(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void insertAtMid(node *&head, int data, int value)
{
    node *temp = head;

    node *newNode = new node(data);

    while (temp->data != value)
    {
        temp = temp->next;
    }

    node *point = temp->next;
    temp->next = newNode;
    newNode->next = point;
}

void deleteNode(node *&head, int value)
{
    node *temp = head;
    while (temp->data != value)
    {
        temp = temp->next;
    }

    node *tempPoint = temp->next->next;
    temp->next = tempPoint;
}

int main()
{

    node *head = NULL;

    node *n = new node(1);
    head = n;

    insertATEnd(head, 2);
    insertATEnd(head, 3);
    insertATEnd(head, 4);
    printList(head);
    cout << endl;
    insertAtMid(head, 5, 3);
    printList(head);
    cout << endl;
    deleteNode(head, 3);
    printList(head);
    cout << endl;

    return 0;
}