#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100000

class Stack {
private:
    char arr[MAX_SIZE];

public:
    int top;
    Stack() {
        top = -1;
    }
bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(char x) {
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

bool isBalanced(const string& str) {
    Stack parenthesesStack;

    for (char bracket : str) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            parenthesesStack.push(bracket);
        } else if (bracket == ')' || bracket == ']' || bracket == '}') {
            if (parenthesesStack.isEmpty()) {
                return false;
            } else if ((bracket == ')' && parenthesesStack.peek() == '(') ||
                       (bracket == ']' && parenthesesStack.peek() == '[') ||
                       (bracket == '}' && parenthesesStack.peek() == '{')) {
                parenthesesStack.pop();
            } else {
                return false;
            }
        }
    }

    return parenthesesStack.isEmpty();
}

int main() {
    string str1 = "{[()]}";
    string str2 = "{[(])}";
    string str3 = "{{[[(())]]}}";

    cout << "Is " << str1 << " balanced? " << (isBalanced(str1) ? "Yes" : "No") << endl;
    cout << "Is " << str2 << " balanced? " << (isBalanced(str2) ? "Yes" : "No") << endl;
    cout << "Is " << str3 << " balanced? " << (isBalanced(str3) ? "Yes" : "No") << endl;

    return 0;
}
