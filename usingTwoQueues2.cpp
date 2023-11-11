//implementing stack using two queues when push operation is costly
#include<iostream>
#include<queue>
using namespace std;

queue<int>q;
queue<int>q2;

void push(int n) {
    if (q.empty())
    {
        q.push(n);
        cout << n << " is inserted\n";
        return;
    }
    while (!q.empty())
    {
        q2.push(q.front());
        q.pop();
    }
    q.push(n);
    while (!q2.empty())
    {
        q.push(q2.front());
        q2.pop();
    }
    cout << n << " is inserted\n";
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
}
int main() {
    cout << "Stack using two queues when push operation is costly\n";

    push(11);
    push(20);
    push(35);
    push(4);
    push(22);

    pop();

    printStack(q);

    pop();
    pop();

    push(56);
    push(67);
    push(100);

    printStack(q);
}