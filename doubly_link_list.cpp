#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node* head;
    Node* tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtHead(int value)
    {
        Node* newNode = new Node(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertAtTail(int value)
    {
        Node* newNode = new Node(value);

        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void insertAtPosition(int pos, int value)
    {
        if (pos == 1)
        {
            insertAtHead(value);
            return;
        }

        Node* current = head;

        for (int i = 1; i < pos - 1 && current != NULL; i++)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Invalid Position\n";
            return;
        }

        if (current->next == NULL)
        {
            insertAtTail(value);
            return;
        }

        Node* newNode = new Node(value);

        newNode->next = current->next;
        newNode->prev = current;

        current->next->prev = newNode;
        current->next = newNode;
    }

    void deleteFromHead()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;

        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }

        head = head->next;
        head->prev = NULL;

        delete temp;
    }

    void deleteFromTail()
    {
        if (tail == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        Node* temp = tail;

        if (head == tail)
        {
            head = NULL;
            tail = NULL;
            delete temp;
            return;
        }

        tail = tail->prev;
        tail->next = NULL;

        delete temp;
    }

    void deleteFromPosition(int pos)
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        if (pos == 1)
        {
            deleteFromHead();
            return;
        }

        Node* current = head;

        for (int i = 1; i < pos && current != NULL; i++)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Invalid Position\n";
            return;
        }

        if (current == tail)
        {
            deleteFromTail();
            return;
        }

        current->prev->next = current->next;
        current->next->prev = current->prev;

        delete current;
    }

    void displayForward()
    {
        Node* current = head;

        cout << "Forward: ";

        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }

    void displayBackward()
    {
        Node* current = tail;

        cout << "Backward: ";

        while (current != NULL)
        {
            cout << current->data << " ";
            current = current->prev;
        }

        cout << endl;
    }

    void search(int value)
    {
        Node* current = head;
        int position = 1;

        while (current != NULL)
        {
            if (current->data == value)
            {
                cout << value << " found at position " << position << endl;
                return;
            }

            current = current->next;
            position++;
        }

        cout << value << " not found\n";
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    DoublyLinkedList list;

    list.insertAtHead(20);
    list.insertAtHead(10);

    list.insertAtTail(30);
    list.insertAtTail(40);

    list.insertAtPosition(3, 25);

    list.displayForward();
    list.displayBackward();

    list.search(30);

    list.deleteFromHead();
    list.displayForward();

    list.deleteFromTail();
    list.displayForward();

    list.deleteFromPosition(2);
    list.displayForward();

    return 0;
}