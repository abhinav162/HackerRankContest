#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

node *insert()
{
    node *head, *last;
    head = NULL;
    int num,n = 5;
    while (n > 0)
    {
        cin >> num;
        node *newNode = new node();
        newNode->data = num;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
        n--;
    }

    return head;
}

void Max(node *listHead)
{
    int max = 0;
    for (node *i = listHead; i != NULL; i = i->next)
    {
        if (i->data > max)
            max = i->data;
    }

    cout << max;
}

int main()
{
    node *final = insert();

    Max(final);
}