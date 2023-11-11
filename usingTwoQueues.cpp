//stack using two queues making pop opeartion costly
#include<iostream>
#include<queue>
using namespace std;

queue<int>q;
queue<int>q2;

void push(int n) {
    q.push(n);
    cout << q.back() << " is inserted\n";
    return;
}

void pop() {
    if (q.empty())
    {
        cout << "No element to delete\n";
        return;
    }
    while (q.size() != 1)
    {
        q2.push(q.front());
        q.pop();
    }
    int data = q.front();
    q.pop();
    while (!q2.empty())
    {
        q.push(q2.front());
        q2.pop();
    }
    cout << data << " is deleted\n"; 
}

void printStack(queue<int>q) {
    if (q.empty())
    {
        cout << "Reached END while printing\n";
        return;
    }
    
    int data = q.front();

    q.pop();

    printStack(q);

    q.push(data);
    cout << q.back() << "\t";
}
int main() {
    
    cout << "Implementing stack using queue\n";

    push(12);
    push(15);
    push(22);
    push(30);
    push(35);

    cout << q.front() << "\n";
    cout << q.back() << "\n";

    pop();
    // pop();
    // pop();
    // pop();
    // pop();

    printStack(q);

    pop();

    printStack(q);
    // cout << q.front() << "\n";
    // cout << q.back() << "\n";
}
