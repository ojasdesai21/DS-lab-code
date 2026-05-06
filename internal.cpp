#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

void deleteNode(int pos)
{
    if(head == NULL)
    {
        cout << "List is empty";
        return;
    }

    Node* temp = head;

    if(pos == 1)
    {
        head = head->next;
        delete temp;
        return;
    }

    for(int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    Node* ptr = temp->next;

    temp->next = ptr->next;

    delete ptr;
}

void display()
{
    Node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    insert(30);
    insert(20);
    insert(10);

    cout << "Linked List: ";
    display();

    deleteNode(2);

    cout << "\nAfter Deletion: ";
    display();

    return 0;
}
