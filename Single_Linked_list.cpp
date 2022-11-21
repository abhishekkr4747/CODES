#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    // constructor 
    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    // destructor
    ~node() {
        int value = this->data;
        if(this->next != NULL)
        {
            // memory free
            delete next;
            this->next = NULL;
        }

        cout<<"Memory is free with data "<<value<<endl;

    }
};

void insertAtBegin(node* &head , int d){

   node* temp = new node(d);
    temp -> next = head;
    head = temp;
}

void print(node* head){

    node* temp1 = head;

    while(temp1->next != NULL)
    {
    cout<<temp1 ->data<<" ";
    temp1 = temp1->next; 
    }
    cout<<temp1 ->data<<" ";
    cout<<endl;
}

void insertAtEnd(node* &tail , int d)
{
    node* temp = new node(d);
     tail ->next = temp;
     tail = tail->next;
}

void insertAtPosition(node* &tail , node* &head , int position , int d){

    // if the position is 1 (first)
    if(position==1)
    {
        insertAtBegin(head , d);
        return;
    }
    node* temp = head;
    int count = 1;

    while(count < position-1){

        temp = temp->next;
        count++;
    }

    // if the position is last
     if(temp->next==NULL)
    {   
        insertAtEnd(tail , d);
        return;
    }

    node* nodeToInsert = new node(d);

    nodeToInsert -> next = temp -> next;
    temp->next = nodeToInsert;
}

void deletionAtPosition(node* head , int position)
{
    // if deleting the first node
    if(position == 1)
    {
        node* temp = head;
        head = head->next;
        // free the memory
        temp->next = NULL;
        delete temp;
    }

    else{

        // if deleting any middle node or last node

        node* current = head;
        node* prv = NULL;
        int count = 1;

        while(count<position)
        {
            prv = current;
            current = current->next;
            count++;
        }

        prv->next = current->next;

        //free the memory
        current->next = NULL;
        delete current;
    }
}

int main()
{
    // create new node
    node* node1 = new node(10);
    // cout<<node1->data<<" "<<endl;
    // cout<<node1->next<<" "<<endl;

    // head pointed to node1
    // for inserting at beginning of a singly linked list
    node* head = node1;
    // print(head);

    // insertAtBegin(head , 12);
    // print(head);

    // insertAtBegin(head , 15);
    // print(head);

    // for inserting at end og singly linked list
    node* tail = node1;
    print(head);

     insertAtEnd(tail , 12);
    print(head);

    insertAtEnd(tail , 15);
    print(head);

    insertAtPosition(tail , head , 4 , 22);
    print(head);

    cout<<"head"<<" "<<head->data<<endl;
    cout<<"tail"<<" "<<tail->data<<endl;

    deletionAtPosition(head , 1);
     print(head);
    
}