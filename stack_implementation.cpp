#include<iostream>
using namespace std;

class Stack{

// properties 
public:

int *arr;
int top;
int size;

//Behaviour

Stack(int size)
{
    this->size = size;
    arr = new int[size];
    top = -1;
}

//To insert values in stack 
void push(int data)
{
    if(size - top > 1)
    {
        top++;
        arr[top] = data;
    }

    else
    cout<<"Stack Overflow"<<endl;
}

//To remove data in stack
void pop()
{
    if(top >= 0)
    {
        top--;
    }

    else
    cout<<"Stack Underflow"<<endl;
}

int peek()
{
    if(top >= 0)
    {
        return arr[top];
    }

    else
    {
        cout<<"Stack is empty"<<endl;
        return -1;
    }
}

bool isEmpty()
{
    if(top == -1)
    {
        return true;
    }

    else
    return false;
}

};

int main()
{
    Stack st(4);
    st.push(22);
    st.push(77);
    st.push(88);
    st.push(111);
    st.push(55);

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    cout<<st.peek()<<endl;
    st.pop();

    st.pop();

    if(st.isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    cout<<"Stack is not empty"<<endl;

        
    return 0;
}