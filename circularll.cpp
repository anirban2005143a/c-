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

void insertAtStart(node *&head, int val)
{
    node *&temp = head;
    node *n = new node(val);

    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    while (temp->next != head)
    {
        temp = temp->next;
    }

    n->next = head->next;
    temp->next = n;
    head = n;
}

void insertAtEnd(node *&head, int val)
{

    if (head == NULL)
    {
        insertAtStart(head, val);
        return;
    }

    node *temp = head;
    node *n = new node(val);

    while (temp->next != head)
    {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
}

int main()
{

    node *head = NULL;
    insertAtEnd(head , 1);
    insertAtEnd(head , 2);
    insertAtEnd(head , 3);
    insertAtEnd(head , 4);
    display(head);
    // insertAtStart(head , 10);

    // display(head);

    return 0;
}

