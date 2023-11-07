#include<iostream>
using namespace std;
#define MAX 5

int top=-1;
int arr[MAX];

void push(int data) {
    if(top==MAX-1){
        cout << "Stack is Overflow" << "\n";
        return ;
    }
    top = top+1;
    arr[top] = data;
    cout << data << " is inserted in stack" << "\n";
    return;
}

void pop() {
    if(top==-1) {
        cout << "Stack is Underflow" << "\n";
        return ;
    }
    int data = arr[top];
    top=top-1;
    cout << data << " is deleted from stack" << "\n";
    return;
}

void peek() {
    if(top==-1) {
        cout << "Stack is Underflow" << "\n";
        return ;
    }
    cout << "The peek/top element is : " << arr[top] << "\n";
    return;
}

bool isEmpty() {
    if(top==-1) {
        return 1;
    }
    else{
        return 0;
    }
}

bool isFull() {
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;
    }
}

void showAll() {
    if(top==-1) {
        cout << "Stack is Underflow" << "\n";
        return ;
    }
    cout << "The stack elements are : " << "\n";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n";
    

}

int main() {
    cout << "hello world" << "\n";

    push(12);
    push(45);
    push(10);
    push(9);
    push(67);
    push(78);

    pop();
    pop();

    push(65);

    peek();

    bool empty = isEmpty();
    if(empty==1) {
        cout << "Stack is empty" << "\n";
    }
    else{
        cout << "Stack is not empty" << "\n";
    }

    bool full = isFull();
    if(full == 1) {
        cout << "Stack is full" << "\n";
    }
    else{
        cout << "Stack is not full" << "\n";
    }

    showAll();

    pop();
    pop();
    pop();
    pop();
    pop();

    isFull();
    if(full == 1) {
        cout << "Stack is full" << "\n";
    }
    else{
        cout << "Stack is not full" << "\n";
    }

    showAll();
}