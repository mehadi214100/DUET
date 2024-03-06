#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100000

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack overflow"<<endl;
            return;
        }
        top = top + 1;
        arr[top] = x;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow "<<endl;
            return -1;
        }
        top = top-1;
        return arr[top];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    int size() {
        return top + 1;
    }

};

int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Stack size: " << stack.size() << endl;
    cout << "Top element: " << stack.peek() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    cout << "Stack size after pop: " << stack.size() << endl;

    return 0;
}
