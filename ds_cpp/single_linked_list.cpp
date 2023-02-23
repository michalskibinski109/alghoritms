#include <iostream>

using namespace std;

class SingleNode
{

public:
    SingleNode *next;
    int data;
    SingleNode(int d, SingleNode *n = NULL)
    {
        data = d;
        next = n;
    }
};

int search(SingleNode *head, int key)
{
    SingleNode *elem = head;
    int index = 0;
    while (elem != NULL)
    {
        if (elem->data == key)
        {
            return index;
        }
        elem = elem->next;
        index++;
    }
    return -1;
}

void push(SingleNode *tail, int data)
{
    cout << tail << " THAT WAS TAIL" << endl;
    SingleNode *newNode = new SingleNode(data);
    cout << newNode << " THAT WAS NODE" << endl;
    tail->next = newNode;
}
int main()
{
    SingleNode tail = SingleNode(30);
    SingleNode second = SingleNode(20, &tail);
    SingleNode head = SingleNode(10, &second);

    SingleNode *elem = &head;
    push(&tail, 40);

    while (elem != NULL)
    {
        cout << elem->data << endl;
        elem = elem->next;
    }

    cout << "index of 20 is " << search(&head, 20) << endl;

    return 0;
}