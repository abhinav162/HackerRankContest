#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

node* insert()
{
    node *head,*newNode,*last;
    head = NULL;
    int num;
    cin >> num;
    while (num != -1)
    {
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
        cin >> num;
    }

    return head;
}

void display(node *listHead)
{
    for (node *i = listHead; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
}

void checkPrime(node *listHead)
{
    int count = 0;
    for (node *i = listHead; i != NULL; i = i->next)
    {
        if(i->data % 2 == 0)
            count++;
    }

    cout<<count;
}

int main()
{
    node *final = insert();

    display(final);

    checkPrime(final);
}