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

    // Enqueue
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
};

int main()
{
    return 0;
}