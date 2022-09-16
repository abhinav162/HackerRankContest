#include <bits/stdc++.h>
struct node
{
    int data;
    node *prv, *nxt;
};
node *Head = NULL, *Tail = NULL;
void insertend(int t)
{
    node *x = new node;
    if (x != NULL)
    {
        x->data = t;
        if (Head == NULL)
        {
            Head = Tail = x;
            Head->nxt = Tail->nxt = NULL;
        }
        else
        {
            Tail->nxt = x;
            x->prv = Tail;
            Tail = x;
        }
    }
}
int main()
{
    int n;
    std::cin >> n;
    if (n < 5 || n >= 15)
    {
        std::cout << "Invalid Input";
        return 0;
    }
    while (n--)
    {
        int t;
        std::cin >> t;
        insertend(t);
    }
    node *x = Tail;
    Tail = Tail->prv;
    Tail->nxt = NULL;
    delete x;
    x = Head;
    while (x != NULL)
    {
        std::cout << x->data << " ";
        x = x->nxt;
    }
    x = Tail;
    std::cout << std::endl;
    while (x != NULL)
    {
        std::cout << x->data << " ";
        x = x->prv;
    }
    return 0;
}