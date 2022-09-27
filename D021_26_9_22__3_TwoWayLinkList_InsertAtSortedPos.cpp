/*
Given a reference to the head of a doubly-linked list and an integer,item , create a new DoublyLinkedListNode object having data value item and insert it at the proper location to maintain the sort.
// Example
head refers to the list 1<-->2<-->4->NULL
item=3
Return a reference to the new list:
1<-->2<-->3<-->4-->NULL

// Input Format

The first line contains an integer t , the number of test cases.
Each of the test case is in the following format:
• The first line contains an integer n , the number of elements in the linked list.
• Each of the next n lines contains an integer, the item for each node of the linked list.
• The last line contains an integer, item, which needs to be inserted into the sorted doubly-linked list.

// Constraints

0

// Output Format

It display the two way list in sorted order.

// Sample Input 0

1
4
1 3 4 10
5
// Sample Output 0

1 3 4 5 10

*/

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next, *prev;
};

node *insertAtBeg(node **head, int n)
{
    int num;
    while (n > 0)
    {
        cin >> num;
        node *newNode = new node;
        newNode->data = num;
        if ((*head) == NULL)
        {
            newNode->next = (*head);
            newNode->prev = NULL;
            *head = newNode;
        }
        else
        {
            newNode->next = (*head);
            (*head)->prev = newNode;
            *head = newNode;
        }
        n--;
    }
    return *head;
}

void insertAtSortedPos(node **head_ref, int newEle)
{
    node *current;
    node *newNode = new node;
    newNode->data = newEle;

    if (*head_ref == NULL)
    {
        *head_ref = newNode;
    }

    else if ((*head_ref)->data >= newNode->data)
    {
        newNode->next = *head_ref;
        newNode->next->prev = newNode;
    }

    else
    {
        current = *head_ref;

        while (current->next != NULL && current->next->data < newNode->data)
            current = current->next;

        newNode->next = current->next;

        if (current->next != NULL)
            newNode->next->prev = newNode;

        current->next = newNode;
        newNode->prev = current;
    }
}

void sortList(node **head_ref)
{
    node *current = *head_ref, *index = NULL;
    int temp;

    if (*head_ref == NULL)
    {
        return;
    }

    else
    {
        while (current != NULL)
        {
            index = current->next;
            while (index != NULL)
            {
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}

// void deleteList(node *&head)
// {
//     node *prev = head;

//     while (head)
//     {
//         head = head->next;
//         delete (prev);
//         prev = head;
//     }
// }

void display(node *listHead)
{
    while (listHead != NULL)
    {
        cout << listHead->data << " ";
        listHead = listHead->next;
    }
}

int main()
{
    int t, i = 0, n, newEle;
    cin >> t;
    node *dlist[10];
    while (i < t)
    {
        dlist[i] = NULL;
        cin >> n;
        insertAtBeg(&dlist[i], n);
        sortList(&dlist[i]);
        cin >> newEle;
        insertAtSortedPos(&dlist[i], newEle);
        // deleteList(dlist[i]);
        display(dlist[i]);
        i++;
    }

    // for (int i = 0; i < t; i++)
    // {
    //     display(dlist[i]);
    //     cout << "\n";
    // }
}