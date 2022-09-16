#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    string data;
    Node *next;
    Node() : data(0), next(NULL) {}
    Node(string data) : data(data), next(NULL) {}
    Node(string data, Node *next) : data(data), next(next) {}
};

Node *create()
{
    int n;
    string x;
    cin >> n;
    if (n < 5 || n > 29)
    {
        cout << "Invalid Input\n";
        return nullptr;
    }
    Node *head = NULL, *prev = NULL;
    while (n--)
    {
        cin >> x;
        for (auto &c : x)
            c = tolower(c);
        Node *p = new Node(x);
        if (head)
        {
            prev->next = p;
            prev = p;
        }
        else
        {
            head = p;
            prev = head;
        }
    }
    return head;
}

int count(Node *head)
{
    Node *p = head;
    int count = 0;
    while (p)
    {
        if (p->data == "vivek")
        {
            count = count + 1;
        }
        p = p->next;
    }
    return count;
}

int main()
{
    Node *head = create();
    if (head == NULL)
    {
        return 0;
    }
    int countnames = count(head);
    cout << countnames << endl;
    return 0;
}