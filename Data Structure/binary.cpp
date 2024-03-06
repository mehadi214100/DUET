#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100000

class Stack {
    private:
        int arr[MAX_SIZE];

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

string decimalToBinary(int decimal) {
    Stack binaryStack;

    while (decimal > 0) {
        int remainder = decimal % 2;
        binaryStack.push(remainder);
        decimal /= 2;
    }

    string binary = "";
    while (!binaryStack.isEmpty()) {
        binary += to_string(binaryStack.peek());
        binaryStack.pop();
    }

    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    string binary = decimalToBinary(decimal);
    cout << "Binary representation: " << binary << endl;

    return 0;
}
