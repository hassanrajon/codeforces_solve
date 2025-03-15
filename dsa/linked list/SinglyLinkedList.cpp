#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// insert at head function
void InsertAtHead(node *&head, int data)
{
    // create new node
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
// insert at tail function
void InsertAtTail(node *&tail, int data)
{
    // create new node
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}
// insert at any position function
void InsertAtPosition(node *&head, node *&tail, int position, int data)
{
    // inserting at first position
    if (position == 1)
    {
        InsertAtHead(head, data);
        return;
    }
    int cnt = 1;
    node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        
        cnt++;
    }
    // inserting at last
    if (temp->next == NULL)
    {
        InsertAtTail(tail, data);
        return;
    }
    // inserting at middle
    node *nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
// delete any node
void deleteAtPosition(int position, node *&head, node *&tail)
{
    // deleting first node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting at middle or last node
        node *curr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            prev->next = NULL;
            tail = prev;
            curr->next = NULL;
            delete curr;
        }
        else
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
    }
}
// print function for a singly linked list
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // create a node
    node *node1 = new node(10);
    // create a head node && tail
    node *head = node1;
    node *tail = node1;
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    print(head);
    InsertAtTail(tail, 20);
    InsertAtTail(tail, 22);
    InsertAtTail(tail, 25);
    print(head);
    InsertAtPosition(head, tail, 4, 50);
    print(head);
    deleteAtPosition(4, head, tail);
    print(head);
    deleteAtPosition(1, head, tail);
    print(head);
    deleteAtPosition(5, head, tail);
    print(head);
}