#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class node
{
public:
    char grade;
    int roll_number;
    node *next;
    node(int val1, char val2)
    {
        roll_number = val1;
        grade = val2;
        next = NULL;
    }
};

void add_node(node *&head)
{
    int roll;
    char grade;
    cin >> roll >> grade;
    node *n = new node(roll, grade);
    n->next = head;
    head = n;
}

void search(node *&head, int r)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->roll_number == r)
        {
            cout << "You have secured " << temp->grade << " grade";
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "You have not appeared for the Contest-1 ";
    }
}

int main()
{
    int num;
    cin >> num;
    node *head = NULL;
    while (num--)
    {
        add_node(head);
    }
    int roll;
    cin >> roll;
    search(head, roll);

    return 0;
}