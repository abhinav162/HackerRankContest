
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    string data;
    node *next;
};

node *insert(int n)
{
    if (n < 5 || n > 29 )
    {
        cout<<"Invalid Input";
        return 0;
    }

    node *head, *tail;
    head = NULL;
    string ename;
    while (n > 0)
    {
        cin >> ename;
        for (int i = 0; i < ename.size(); i++)
        {
            ename[i] = toupper(ename[i]);
        }
        
        node *newNode = new node();
        newNode->data = ename;
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
        n--;
    }

    return head;
}

void countRepetition(node *listHead)
{
    string sName = "VIVEK";
    int count = 0;
    for (node *i = listHead; i != NULL; i = i->next)
    {
        if(i->data == sName)
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

    // display(final);

    countRepetition(final);
}