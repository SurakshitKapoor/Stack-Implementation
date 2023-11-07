#include<bits/stdc++.h>
#include<stack>
using namespace std;

//declaring stack st as a global variable
stack<int>st;

void printStack(stack<int>&st){

    //base case
    if(st.empty()){
        return;
    }

    //breaking the stack and keeping the value
    int data = st.top();
    cout << data << "\t";
    st.pop();

    //recursive call
    printStack(st);

    //restoring the breaked value on return of func()
    st.push(data);
    return;
}

int main() {
    st.push(5);
    st.push(10);
    st.push(8);
    st.push(12);

    cout << "size is : " << st.size() << endl;

    cout << "The top is : " << st.top() << endl;

    cout << "Is stack empty : " << st.empty() << "\n";

    st.pop();
    st.pop();

    st.push(56);
    st.push(90);
    st.push(17);
    st.push(82);

    printStack(st);
    return 0;

}