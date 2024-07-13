#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

ListNode* deleteDuplicates(ListNode* head) {
    if (head == nullptr) {
        return nullptr;
    }

    // Dummy node to handle edge cases
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *prev = dummy;
    ListNode *curr = head;

    while (curr != nullptr) {
        bool isDuplicate = false;
        // Check for duplicates
        while (curr->next != nullptr && curr->val == curr->next->val) {
            isDuplicate = true;
            curr = curr->next;
        }

        if (isDuplicate) {
            // Skip all duplicates
            prev->next = curr->next;
        } else {
            // No duplicates detected
            prev = prev->next;
        }

        curr = curr->next;
    }

    ListNode *newHead = dummy->next;
    delete dummy;
    return newHead;
}

void insertAtHead(ListNode* &head, int val) {
    ListNode* temp = new ListNode(val);
    temp->next = head;
    head = temp;
}

void insertAtTail(ListNode* &tail, int val) {
    ListNode* temp = new ListNode(val);
    tail->next = temp;
    tail = temp;
}

void print(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = new ListNode(10);
    ListNode* tail = head;
    
    insertAtHead(head, 12);
    insertAtHead(head, 12);
    insertAtHead(head, 12);
    insertAtTail(tail, 11);

    cout << "Original List: ";
    print(head);

    ListNode* afterRemoving = deleteDuplicates(head);
    cout << "After removing duplicates: ";
    print(afterRemoving);

    return 0;
}
