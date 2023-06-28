//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct StackNode {
    int data;
    StackNode *next;
    StackNode(int a) {
        data = a;
        next = NULL;
    }
};

class MyStack {
  private:
    StackNode *top;

  public:
    void push(int);
    int pop();
    MyStack() { top = NULL; }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        MyStack *sq = new MyStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                sq->push(a);
            } else if (QueryType == 2) {
                cout << sq->pop() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends


//Function to push an integer into the stack.
void MyStack::push(int x) 
{
    StackNode* temp = new StackNode(x);
    temp->next = top;
    top = temp;
}

int MyStack::pop() 
{
    if(top == NULL) {
        return -1; // Indicates stack underflow
    }
    StackNode* temp = top;
    int poppedValue = temp->data;
    top = top->next;
    delete temp;
    return poppedValue;
}

