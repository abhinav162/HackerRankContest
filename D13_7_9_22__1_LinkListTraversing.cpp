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

int prime(int element)
{
    int flag = 0;
    if (element <= 1)
    {
        flag++;
    }
    for (int i = 2; i <= element / 2; i++)
    {
        if (element % i == 0)
        {
            flag++;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void countPrime(node *listHead)
{
    int count = 0;
    for (node *i = listHead; i != NULL; i = i->next)
    {
        if (prime(i->data) == 1)
        {
            count++;
        }
    }
    cout << count;
}

int main()
{
    int n;
    cin >> n;
    node *final = insert(n);
    if (n > 0)
    {
        countPrime(final);
    }
    else
    {
        cout << "Invalid Number";
    }
    return 0;
}