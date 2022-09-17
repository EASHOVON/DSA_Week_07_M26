#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        this->value = val;
        this->Next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    // Enqueue --> Push
    void Push(int val)
    {
        Node *newNode = new Node(val);
        if (front == NULL)
        {
            front = newNode;
            back = newNode;
            return;
        }

        back->Next = newNode;
        back = back->Next;
    }

    // Dequeue --> Pop
    int Pop()
    {
        int chk = -1;
        if (back == NULL)
        {
            cout << "Queue Underflow | There is no element in the queue" << endl;
            return chk;
        }
        Node *delNode;
        delNode = front;
        front = front->Next;
        if (front == NULL)
        {
            back == NULL;
        }
        chk = delNode->value;
        delete delNode;
        return chk;
    }

    // Peek
    int Front()
    {
        int chk;
        chk = front->value;
        return chk;
    }

    int Back()
    {
        int chk;
        chk = back->value;
        return chk;
    }

    // Empty

    bool Empty()
    {
        if (front == NULL && back == NULL)
            return true;
        else
            false;
    }
};
