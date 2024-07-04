#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free from " << value << endl;
    }
};

// Insert at head
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Innsert At tail
void inertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp = tail;
}

// Insert at middle
void insertAtMiddle(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        inertAtTail(tail, data);
        return;
    }

    Node *newNode = new Node(data);

    newNode->next = temp->next;

    temp->next = newNode;
}

// Deletion

void deleteion(Node *&head, int position)
{

    // deletion of head
    // steps :
    //  1. make temp and head equal
    //  2. Move the head to next node
    //  3. make temp address as NULL
    //  4. Delete the temp

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    // deletion at any position and tail
    // Steps:
    // 1. Make two node with current which point to head , and previous with null
    // 2. in loop run until position found
    // 3. update the prev-next with curr->next
    // 4. make curr address as NULL
    // 5. delete the curr
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

// Printing
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *ankit = new Node(10);
    // cout<<ankit->data<<endl;
    // cout<<ankit->next<<endl;

    Node *head = ankit;
    insertAtHead(head, 15);
    print(head);

    Node *tail = ankit;
    inertAtTail(tail, 25);
    print(head);

    insertAtMiddle(tail, head, 2, 99);
    print(head);

    deleteion(head, 1);
    print(head);

    deleteion(head, 2);
    print(head);

    return 0;
}