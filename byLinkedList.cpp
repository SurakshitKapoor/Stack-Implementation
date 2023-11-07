#include<iostream>
using namespace std;

struct node{
    int data;
    node *prev;
};

// struct node *top = (struct node *)malloc(sizeof(struct node));
struct node *top = NULL;

void push(int data) {
    // struct node *newNode = (struct node *)malloc(sizeof(struct node));
    node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> prev = top;
    top = newNode;
}

void pop() {
    struct node*temp = top;
    if (top==NULL)
    {
        cout << "Stack is Underflow" << "\n";
    }
    else{
        cout << "The top is : " << top->data << "\n";
        temp = top;
        top=top->prev;
        free(temp);
    }
}

bool isEmpty() {
    if(top==NULL) {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int main() {
    cout << "hello" << endl;
    cout << "Choose the operation to do on stack: \n" << endl;

    do {
    cout << "1.Push; \n2.Pop; \n3.Top; \n4.isEmpty; \n5.End" << endl;
    int ch;
    cin >> ch;
    int data;
    bool empty;
    switch (ch)
    {
    case 1: 
        cout << "Enter the data to insert : " << endl;
        cin >> data;
        push(data);
        cout << data << " is inserted in stack" << "\n";
        break;
    
    case 2:
        data = top->data;
        pop();
        cout << data << " is deleted from stack";
        break;

    case 3: 
        cout << "The top/peek is : " << top->data << endl;
        break;

    case 4: 
        empty = isEmpty();
        if(empty) {
            cout << "Stack is empty" << "\n";
        }
        else{
            cout << "The stack is not empty" << "\n";
        }
        break;

    case 5:
        exit(0);

    default:
        cout << "Pls enter the valid operation" << "\n";
        break;
    }
    } while(1);

    return 0;
}