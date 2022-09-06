#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

node *insert(int n)
{
    if (n <= 0)
    {
        return 0;
    }
    
    node *head, *newNode, *tail;
    head = NULL;
    int num;
    while (n > 0)
    {
        cin >> num;
        node *newNode = new node();
        newNode->data = num;
        newNode->next = NULL;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        // cin >> num;
        n--;
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

void checkElegibility(node *listHead)
{
    int count = 0;
    for (node *i = listHead; i != NULL; i = i->next)
    {
        if (i->data  > 18)
            count++;
    }

    cout << count;
}

int main()
{
    int n;
    cin >> n;
    node *final = insert(n);

    // display(final);

    checkElegibility(final);
}