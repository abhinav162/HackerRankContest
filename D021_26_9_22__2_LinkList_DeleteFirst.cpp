/*
Write a program to delete the first node from the circular linked list using pop() function. The list may be empty after you delete the node. In that case, print "CLL is Empty". If it is not possible to remove due to underflow the print a message of "Underflow". If number of elements is not valid then print a message of "Invalid Number"


// Input Format

The first line of input contains the number of elements in the circular linked list.
The second line of input contains an space separeted node data values.

// Constraints

0<=n<=1000, where n is number of elements in the linked list the data part of node also must be in between 0 to 1000.

// Output Format

It will display the singly circular linked list after deleting the first node from it.
The list may be empty after you delete the node. In that case, print "CLL is Empty". If it is not possible to remove due to underflow the print a message of "Underflow". If number of elements is not valid then print a message of "Invalid Number"


// Sample Input 0

5
1 2 3 4 5
// Sample Output 0

2 3 4 5
*/

#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int _data)
    {
        data = _data;
        next = NULL;
    }

    Node *insert(int _data)
    {
        // std:: cout<<"entered insert function"<<std:: endl;
        Node *temp = new Node(_data);
        if (this == NULL)
        {
            temp->next = temp;
            return temp;
        }
        else
        {
            Node *curr = this;
            while (curr->next != this)
                curr = curr->next;
            curr->next = temp;
            temp->next = this;
        }

        return this;
    }

    Node *deleteHead()
    {
        Node *ans = this;
        Node *curr = this;

        while (curr->next != ans)
            curr = curr->next;

        if (curr == ans)
        {
            return NULL;
        }
        Node *temp = ans;
        ans = ans->next;
        curr->next = ans;
        delete (temp);

        return ans;
    }

    void displayLL()
    {
        Node *curr = this;
        do
        {
            std::cout << curr->data << " ";
            curr = curr->next;
        } while (curr != this);
    }
};

int main()
{
    Node *head = NULL;

    int size;
    std::cin >> size;
    if (size < 0 || size > 1000)
    {
        std ::cout << "Invalid Number" << std ::endl;
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        int a;
        std::cin >> a;
        head = head->insert(a);
    }

    if (head == NULL)
    {
        std ::cout << "Underflow" << std ::endl;
        return 0;
    }

    head = head->deleteHead();

    if (head == NULL)
    {
        std ::cout << "CLL is Empty" << std ::endl;
        return 0;
    }

    head->displayLL();

    return 0;
}