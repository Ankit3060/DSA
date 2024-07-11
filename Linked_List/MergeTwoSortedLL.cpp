#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* solve(Node* first, Node* second) {
    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;

    while (next1 != NULL && curr2 != NULL) {
        if ((curr2->data >= curr1->data) && (curr2->data <= next1->data)) {
            // add node between first and second
            curr1->next = curr2;
            curr2->next = next1;

            // update pointers
            curr1 = curr2;
            curr2 = next2;
            if (next2 != NULL) {
                next2 = next2->next;
            }
        } else {
            curr1 = next1;
            next1 = next1->next;
            if (next1 == NULL) {
                curr1->next = curr2;
                return first;
            }
        }
    }

    // If curr1 reaches the end of first list
    // if (next1 == NULL) {
    //     curr1->next = curr2;
    // }

    return first;
}

Node* sortTwoLists(Node* first, Node* second) {
    if (first == NULL) {
        return second;
    }
    if (second == NULL) {
        return first;
    }

    if (first->data <= second->data)
        return solve(first, second);
    else
        return solve(second, first);
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* first = new Node(1);
    first->next = new Node(3);
    first->next->next = new Node(5);
    cout<<"First Node is : ";
    print(first);

    Node* second = new Node(2);
    second->next = new Node(4);
    second->next->next = new Node(6);
    cout<<"Second Node is : ";
    print(second);

    Node* sorted = sortTwoLists(first, second);
    cout<<"Merged Node is :";
    print(sorted);

    return 0;
}
