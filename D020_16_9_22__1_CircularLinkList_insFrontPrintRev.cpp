/*
A certain application needs 5 users’ first names to be stored at first, and then a name, secondly, the name mentioned by user in another input, to be added at the beginning. Use an appropriate linked list such that the program uses only one pointer (capable of moving in both directions) to traverse the list. Finally show the list in backward direction.

// Input Format

Tanya Elon Harry Jay Alice
Henry

// Constraints

Five First names

// Output Format

Alice Jay Harry Elon Tanya Henry

// Sample Input 0

Tanya Elon Harry Jay Alice
Henry

// Sample Output 0

Alice Jay Harry Elon Tanya Henry
*/

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    string data;
    node *next;
    node *prev;
};

node *pushFront(node **head, string new_ele)
{
    node *newNode = new node;
    newNode->data = new_ele;
    newNode->prev = NULL;
    if ((*head) == NULL)
    {
        newNode->next = (*head);
        *head = newNode;
    }
    else
    {
        newNode->next = (*head);
        (*head)->prev = newNode;
        *head = newNode;
    }
    return *head;
}

void display(node *listHead)
{
    node *f = listHead->next;
    while (f != NULL)
    {
        cout << f->data << " ";
        f = f->next;
    }
    cout << listHead->data;
}

int main()
{
    node *dlist = NULL;
    string name;
    int i = 0;
    while (i < 5)
    {
        cin >> name;
        pushFront(&dlist, name);
        i++;
    }
    string new_ele;
    cin >> new_ele;
    node *x = pushFront(&dlist, new_ele);
    display(x);
}