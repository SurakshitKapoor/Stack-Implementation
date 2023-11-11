//implementing stack using single queue and making push operation costly
#include<iostream>
#include<queue>
using namespace std;

queue<int>q;
bool flag = 0;
void pushOperation(int n) {
    if (q.empty())
    {
        q.push(n);
        cout << q.front() << " is inserted\n";
        return;
    }
    int data = q.front();

    q.pop();

    pushOperation(n);

    q.push(data);
    return;
}

void reverseStack() {
    if (q.empty())
    {
        return;
    }
    
    int data = q.front();

    q.pop();

    reverseStack();

    q.push(data);
    return;    
}

//while push() each time, first we will be reverse the queue, the push the element at bottom or at front, then in pushOperation() rstoring the elements in original order.
void push(int n) {

    reverseStack();

    pushOperation(n); 
}

void pop() {
    if (q.empty())
    {
        cout << "No element to delete\n";
        return;
    }
    int data = q.front();
    q.pop();
    cout << data << " is deleted\n";  
}

void printStack(queue<int>q) {
    if (q.empty())
    {
        cout << "Reached END while printing\n";
        return;
    }

    cout << q.front() << "\t";

    int data = q.front();

    q.pop();

    printStack(q);

    q.push(data);
    return;   
}
int main() {
    cout << "Stack using single queue when push operation is costly\n";

    push(10);
    push(15);
    push(20);

    printStack(q);

    pop();
    pop();

    push(30);
    push(35);
    push(40);
    push(50);

    printStack(q);
}