/*

On September 5,2022 Python exam was taken and it was written by 6 students, and accordingly concerned faculty member uploaded the marks of those 6 students .But one of the student was not able to attempt exam so with the request , his exam was re-conducted and later on faculty is going to upload marks ,but before this faculty must needs to enter rollno and then after his marks.

// Input Format

First line consist with 6 numbers needs to be inserted Second Line consist with the position, that where to insert Third line consist with the data which is to be inserted.

// Constraints

All the input which is to be inserted that will be of numeric type.

// Output Format

Displayed final inserted element on its actual position which is given as input.

// Sample Input 0

1 2 3 4 5 6
2
7
// Sample Output 0

1 7 2 3 4 5 6

*/

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};

node *insert(node **head, int n)
{
    node *temp = new node;
    int num;
    while (n != 0)
    {
        cin >> num;
        node *newNode = new node;
        newNode->data = num;
        if (*head == NULL)
        {
            *head = newNode;
            temp = *head;
            temp->next = NULL;
        }
        else
        {
            temp = *head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        n--;
    }

    return *head;
}

void insertAtPos(node **head_ref, int pos, int marks)
{
    node *temp = *head_ref;
    node *newNode = new node;
    int i = 1;
    newNode->data = marks;
    while (i < pos-1)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

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
    node *list = NULL;
    insert(&list, 6);
    int pos, marks;
    cin >> pos >> marks;
    insertAtPos(&list, pos, marks);
    display(list);
}