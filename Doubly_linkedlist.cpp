#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;
    node* prev;

    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;        
    }
};

void insertAtHead(node* &head , int d)
{
    // if node is empty 
    if(head == NULL)
    {
        node* temp = new node(d);
        head = temp;
    }
    else{
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
}

void insertAtEnd(node* head , node* &tail , int d)
{
    if(head == 0)
    {
        insertAtHead(head , d);
        return;
    }
    else
    {
    node* temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
    }
}

void insertAtPosition(node* &tail , node* &head , int position , int d)
{
    // insert the node at first positon
    if(position==1)
    {
        insertAtHead(head , d);
        return;
    }

    // insert the node at any positon or end
    node* temp = head;
    int count = 1;

    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }

    // insert the node at end
    if(temp->next == NULL)
    {
        insertAtEnd( head ,tail , d);
        return;
    }

    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}

void print(node* &head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    insertAtHead(head , 11);
    print(head);

    insertAtHead(head , 12);
    print(head);

    insertAtEnd(head ,tail , 13);
    print(head);

    insertAtPosition(tail , head , 2 , 100);
    print(head);
}