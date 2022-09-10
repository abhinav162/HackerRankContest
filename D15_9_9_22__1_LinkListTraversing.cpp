#include <bits/stdc++.h>
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
    node *head, *last;
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

void evenSum(node *listHead)
{
    int sum = 0;
    for (node *i = listHead; i != NULL; i = i->next)
    {
        if (i->data % 2 == 0)
        {
            sum += i->data;
        }
    }
    if (sum > 0)
    {
        cout << sum;
    }
    else
    {
        cout << "No Even numbers Present";
    }
}

int main()
{
    int n;
    cin >> n;
    node *final = insert(n);
    if (n > 0)
    {
        evenSum(final);
    }
    else
    {
        cout << "Invalid Number";
    }
    return 0;
}