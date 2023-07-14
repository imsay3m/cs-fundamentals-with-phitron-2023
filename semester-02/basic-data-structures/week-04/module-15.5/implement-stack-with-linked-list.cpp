/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

class Stack
{
    // Write your code here

public:
    int sz = 0;
    Node *head = NULL;
    Node *tail = NULL;
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

    void push(int data)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void pop()
    {
        if (sz == 0)
            return;
        sz--;
        Node *deleteHead = head;
        head = head->next;
        delete deleteHead;
    }

    int getTop()
    {
        if (sz == 0)
            return -1;
        return head->data;
    }
};