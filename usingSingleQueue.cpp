//implementing Stack using single queue when pop operation is costly
#include<iostream>
#include<queue>
using namespace std;

queue<int>q;

void push(int n) {
    q.push(n);
    cout << n << " is inserted\n";
    return;
}

void popOperation() {
    if (q.empty())
    {
        cout << "No element to delete\n";
        return;
    }
    if (q.size() == 1)
    {
        int delData = q.front();
        q.pop();
        cout << delData << " is deleted\n";
        return;
    }
    int data = q.front();
 
    q.pop();

    popOperation();

    q.push(data);
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
    
}

//while each time doing pop() ; the queue reverses, so we reverse again the queue each time to make it original
void pop() {
    
    popOperation();
    
    reverseStack();
    
}

void printStack(queue<int> q) {
    if (q.empty())
    {
        cout << "Reached END while printing\n";
        return;
    }
    int data = q.front();

    q.pop();

    printStack(q);

    q.push(data);
    cout << data << "\t";
    return;
}
int main() {
    cout << "Stack using single queue with pop opeartion is costly\n";

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printStack(q);
    cout << "\n";

    pop();
    pop();
    pop();

    printStack(q);
    cout << "\n";

    push(35);
    push(96);
    push(100);
    push(42);

    printStack(q);
}