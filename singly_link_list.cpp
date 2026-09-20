#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class SinglyLinkedList
{
public:
    Node *head;

    SinglyLinkedList()
    {
        head = NULL;
    }

    void insertAtHead(int value)
    {
        Node *newNode = new Node(value);

        newNode->next = head;
        head = newNode;
    }

    void insertAtTail(int value)
    {
        Node *newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    void insertAtPosition(int pos, int value)
    {
        if (pos == 1)
        {
            insertAtHead(value);
            return;
        }

        Node *newNode = new Node(value);
        Node *temp = head;

        for (int i = 1; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position" << endl;
                return;
            }

            temp = temp->next;
        }

        if (temp == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        delete temp;
    }

    void deleteAtTail()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node *temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    void deleteAtPosition(int pos)
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }

        if (pos == 1)
        {
            deleteAtHead();
            return;
        }

        Node *temp = head;

        for (int i = 1; i < pos - 1; i++)
        {
            if (temp->next == NULL)
            {
                cout << "Invalid Position" << endl;
                return;
            }

            temp = temp->next;
        }

        if (temp->next == NULL)
        {
            cout << "Invalid Position" << endl;
            return;
        }

        Node *deleteNode = temp->next;

        temp->next = deleteNode->next;

        delete deleteNode;
    }

    void search(int value)
    {
        Node *temp = head;
        int pos = 1;

        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << "Found at position " << pos << endl;
                return;
            }

            temp = temp->next;
            pos++;
        }

        cout << "Not Found" << endl;
    }

    void printList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    SinglyLinkedList list;

    list.insertAtHead(20);
    list.insertAtHead(10);

    list.insertAtTail(30);
    list.insertAtTail(40);

    cout << "List: ";
    list.printList();

    list.insertAtPosition(3, 25);

    cout << "After Insert: ";
    list.printList();

    list.deleteAtHead();

    cout << "After Delete Head: ";
    list.printList();

    list.deleteAtTail();

    cout << "After Delete Tail: ";
    list.printList();

    list.deleteAtPosition(2);

    cout << "After Delete Position 2: ";
    list.printList();

    list.search(30);

    return 0;
}