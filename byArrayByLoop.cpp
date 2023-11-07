#include<bits/stdc++.h>
#include<stack>
using namespace std;

stack<int>st;

int main() {

    cout << "hello" << endl;
    do{
    cout << "Choose the operation to do on stack: \n";
    cout << "1.Push; \t2.Pop; \t3.Top; \t4.isEmpty; \t5.End" << endl;
    int ch;
    bool empty;
    int data;
    cin >> ch;
    switch(ch){
        case 1: 
            cout << "Enter the element to push : " << "\n";
            cin >> data;
            st.push(data);
            cout << data << " is inserted in stack" << endl;
            break;

        case 2:
            data = st.top();
            st.pop();
            cout << data << " is deleted from stack" << "\n";
            break;

        case 3:
            cout << "The Top is : " << st.top() << endl;
            break;

        case 4: 
            empty = st.empty();
            if(empty){
                cout << "Stack is empty" << endl;
            }
            else{
                cout << "Stack is not empty" << endl;
            }
            break;

        case 5:
            exit(0);

        default:
            cout << "Please enter a valid option" << "\n";
            break;
    }
    } while(1);

    return 0;

}