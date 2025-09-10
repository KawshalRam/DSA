#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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

void Print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);
    if (head == NULL) {  // empty list
        head = tail = temp;
    } else {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node*& head, Node*& tail, int data) {
    Node* temp = new Node(data);
    if (head == NULL) {  // empty list
        head = tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtMiddle(Node*& head, Node*& tail, int data, int pos) {
    if (pos == 1) {
        insertAtHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt < pos - 1 && temp->next != NULL) {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL) { // inserting at tail
        insertAtTail(head, tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void DeleteNode(Node*& head, Node*& tail, int pos) {
    if (head == NULL) return;

    if (pos == 1) {  // delete head
        Node* temp = head;
        head = temp->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL; // list became empty
        }
        temp->next = NULL;
        delete temp;
    } else {
        Node* curr = head;
        int cnt = 1;
        while (cnt < pos && curr != NULL) {
            curr = curr->next;
            cnt++;
        }
        if (curr == NULL) return; // pos out of range

        if (curr->next != NULL) {
            curr->next->prev = curr->prev;
        } else {
            tail = curr->prev; // deleting last node
        }
        if (curr->prev != NULL) {
            curr->prev->next = curr->next;
        }
        curr->next = curr->prev = NULL;
        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    Print(head);

    insertAtHead(head, tail, 11);
    Print(head);

    insertAtTail(head, tail, 22);
    Print(head);

    insertAtMiddle(head, tail, 100, 2);
    Print(head);

    DeleteNode(head, tail, 4);
    Print(head);

    if (head) cout << "Head: " << head->data << endl;
    if (tail) cout << "Tail: " << tail->data << endl;

    return 0;
}
