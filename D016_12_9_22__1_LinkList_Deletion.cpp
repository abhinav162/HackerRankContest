#include <bits/stdc++.h>
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

// void deleteNode(node *listHead, int key)
// {
//     node *temp = listHead;
//     node *prev = NULL;
//     if (temp != NULL && temp->data == key)
//     {
//         listHead = temp->next;
//         free(temp);
//         return;
//     }
//     while (temp != NULL && temp->data != key)
//     {
//         prev = temp;
//         temp = temp->next;
//     }
//     if (temp == NULL)
//         return;
//     prev->next = temp->next;
//     free(temp);
// }

// int deleteEven(node *listHead)
// {
//     node *temp = listHead;
//     int count = 0;
//     while(temp != NULL){
//         if(temp->data % 2 == 0){
//             deleteNode(listHead, temp->data);
//             count++;
//         }
//         temp = temp->next;
//     }
//     return count;
// }

int deleteEven(node *listHead)
{
    node *temp = listHead;
    int count = 0;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            if (listHead == temp)
            {
                listHead = listHead->next;
                delete temp;
                temp = listHead;
            }
            else if(temp->next==NULL)
            {
                
            }
        }
        temp = temp->next;
    }
    return count;
}

int main()
{
    node *final = insert();
    int x = deleteEven(final);
    // if(x == 0){
    //     cout<<"No even numbers found";
    // }
    // else{
    display(final);
    // }
    return 0;
}