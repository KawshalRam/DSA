#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    //constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node()
    {
        int value=this->data;
        //Memory Free
        if(this->next !=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};

void InsertAtHead(Node*& head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail,int data)
{
    Node* temp = new Node(data);
    tail -> next=temp;
    tail=tail ->next;
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtPosition( Node * &head,Node *&tail,int data,int pos)
{
    if(pos==1)
    {
        InsertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<pos-1 && temp->next !=NULL)
    {
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL)
    {
        InsertAtTail(tail,data);
        return;
    }
    Node * nodeToInsert= new Node(data);

    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;
}

void Delete(Node* &head,int pos)
{
    
    if(pos==1)
    {
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    else
    {
    Node* curr = head;
    Node* prev = NULL;
    int cnt=1;
    while(cnt<pos )
    {
        prev=curr;
        curr=curr->next;
        cnt++;
    } 
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    }
}

int main() {
    Node* node1 = new Node(10);
    //declaring head
    Node* head = node1;
    //declaring Tail
    Node* tail = node1;
    print(head);

    InsertAtTail(tail, 11);
    print(head);

    InsertAtHead(head, 15);
    print(head);

    InsertAtPosition(head,tail,30,1);
    print(head);

    InsertAtPosition(head, tail, 40, 3);  
    print(head);

    InsertAtPosition(head, tail, 50, 10); 
    print(head);

    Delete(head,4);
    print(head);
    return 0;
}
