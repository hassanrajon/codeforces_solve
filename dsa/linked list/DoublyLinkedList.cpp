#include <bits/stdc++.h>
using namespace std;
#define ll long long int
class node
{
public:
    int data;
    node *prev;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    // destructor
    ~node()
    {
        cout << data << " deleted " << endl;
    }
};
// insertion at head
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
// insertion at tail
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
// insert at any position
void insertAtPosition(node *&head, node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    int cnt = 1;
    node *temp = head;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    node *nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    nodeToInsert->prev = temp;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}
// delete at any position
void deleteAtPosition(node *&head, node *&tail, int position)
{
    if (head == NULL)
    { 
        // List is empty
        cout << "List is empty!" << endl;
        return;
    }

    if (position == 1)
    { // Delete head
        node *temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL; // If the list becomes empty
        delete temp;
        return;
    }

    int cnt = 1;
    node *curr = head;

    while (cnt < position && curr != NULL)
    {
        curr = curr->next;
        cnt++;
    }

    if (curr == NULL)
    { 
        // Position out of bounds
        cout << "Position out of bounds!" << endl;
        return;
    }

    if (curr->next == NULL)
    { 
        // Delete tail
        node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
        return;
    }

    // Delete a middle node
    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;
    delete curr;
}

// traverse through the linked list
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}
// find length of the linked list
int getLength(node *&head)
{
    node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main()
{
    node *head = new node(0);
    node *tail = head;
    insertAtHead(head, -1);
    insertAtHead(head, -2);
    insertAtHead(head, -3);
    print(head);
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    print(head);
    insertAtPosition(head, tail, 1, -4);
    insertAtPosition(head, tail, 9, 4);
    insertAtPosition(head, tail, 5, 100);
    print(head);
    deleteAtPosition(head, tail, 1);
    print(head);
    deleteAtPosition(head, tail, 9);
    deleteAtPosition(head, tail, 4);
    print(head);
    cout << "head: " << head->data << " tail: " << tail->data << " lenght: " << getLength(head) << endl;
}