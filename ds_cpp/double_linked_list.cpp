#include <iostream>

using namespace std;

class DoubleNode
{
public:
    DoubleNode *next;
    DoubleNode *prev;
    int data;
    DoubleNode(int d, DoubleNode *n = NULL, DoubleNode *p = NULL)
    {
        data = d;
        next = n;
        prev = p;
    }
};

void push(DoubleNode **head_ref, int data)
{
    DoubleNode *new_node = new DoubleNode(data, (*head_ref)); // this is pointer to head

    if ((*head_ref) != NULL)
    {
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}

void insert_after(DoubleNode *prev_ref, int data)
{
    DoubleNode *next_ref = prev_ref->next;
    DoubleNode *new_ref = new DoubleNode(data, next_ref, prev_ref);
    next_ref->prev = new_ref;
    prev_ref->next = new_ref;
}

void append(DoubleNode **head_ref, int data)
{
    // pass
}

int main()
{
    DoubleNode head = DoubleNode(10);
    DoubleNode *elem = &head;
    for (int i = 9; i > 0; i--)
    {
        push(&elem, i);
    }

    insert_after(head.prev, 111111);
    while (elem != NULL)
    {
        cout << elem->data << endl;
        elem = elem->next;
    }
}