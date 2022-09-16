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

void display(node *listHead, int n)
{
    vector<int> arr;
    for (node *i = listHead; i != NULL; i = i->next)
    {
        if (i->data % 2 == 0)
        {
            arr.push_back(i->data);
        }
    }

    for (int j = 0; j < arr.size(); j++)
    {
        for (int k = 0; k <= j; k++)
        {
            cout << arr[k] << " ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n;
    cin >> n;
    node *final = insert(n);
    display(final, n);
    return 0;
}