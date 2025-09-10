#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int val = this->data;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free of data " << val << endl;
    }
};

// Printing circular linked list
void Print(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = tail;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}

void insertNode(Node*& tail, int element, int data) {
    Node* newNode = new Node(data);

    // Case 1: Empty list → make newNode point to itself
    if (tail == NULL) {
        tail = newNode;
        newNode->next = newNode;
        return;
    }

    // Case 2: Non-empty list → find element
    Node* curr = tail;
    while (curr->data != element) {
        curr = curr->next;
        if (curr == tail) {
            cout << "Element " << element << " not found!" << endl;
            delete newNode;
            return;
        }
    }

    // Insert after curr
    newNode->next = curr->next;
    curr->next = newNode;

    // If inserting after tail, update tail
    if (curr == tail) {
        tail = newNode;
    }
}

void DeleteNode(Node* &tail,int value)
{
    if(tail==NULL)
    cout<<"empty List"<<endl;
    else
    {
        Node * prev=tail;
        Node * curr=tail->next;

        while(curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main() {
    Node* tail = NULL;

    insertNode(tail, 5, 12);  // first node → 12
    Print(tail);

    insertNode(tail, 12, 13); // after 12 → 12 13
    Print(tail);

    insertNode(tail, 13, 14); // after 13 → 12 13 14
    Print(tail);

    insertNode(tail, 12, 15); // after 12 → 12 15 13 14
    Print(tail);

    DeleteNode(tail,15);
    Print(tail);

    return 0;
}
