#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
        // Implement the isEmpty() function
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (sz == 0)
            return -1;
        sz--;
        Node *deleteNode = head;
        head = head->next;
        return deleteNode->data;
        // delete deleteNode;
    }

    int front()
    {
        if (sz == 0)
            return -1;
        else
            return head->data;
    }
};