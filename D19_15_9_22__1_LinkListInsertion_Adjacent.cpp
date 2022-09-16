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

node* insertAtAdj(node *head)
{
    vector<int> arr;
    for (node *i = head; i != NULL; i = i->next)
    {
        arr.push_back(i->data);
    }
    int N = arr.size();
    for (int j = 0; j < N; j++)
    {
        if (arr[j] == arr[j + 1])
        {
            for (int k = ++N; k > j; k--)
            {
                arr[k] = arr[k - 1];
            }
            arr[j + 1] = arr[j - 1] + arr[j + 3];
        }
    }

    // for (int t = 0; t < N; t++)
    // {
    //     cout << arr[t] << " ";
    // }

    node *first, *last;
    first = NULL;
    int i = 0;
    while (i < N)
    {
        node *newNode = new node();
        newNode->data = arr[i];
        newNode->next = NULL;
        if (first == NULL)
        {
            first = newNode;
            last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
        i++;
    }
    return first;
}

void display(node *listHead)
{
    for (node *i = listHead; i != NULL; i = i->next)
    {
        cout << i->data << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    if (n > 5 && n < 10)
    {
        node *list = insert(n);
        display(list);
        cout << "\n";
        node *newList = insertAtAdj(list);
        display(newList);
    }
    else
    {
        cout << "Invalid Input";
    }
}