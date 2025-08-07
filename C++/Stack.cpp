#include <iostream>
using namespace std;

const int MAX = 2;

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow! Cannot push " << value << ".\n";
    } else {
        stack[++top] = value;
        cout << value << " pushed into the stack.\n";
    }
}

void pop() {
    if (top < 0) {
        cout << "Stack Underflow! No element to pop.\n";
    } else {
        cout << stack[top--] << " popped from the stack.\n";
    }
}

void display() {
    if (top < 0) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Stack elements (from top to bottom):\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << "\n";
        }
    }
}

int main() {
    int choice, value;

    while (true) {

        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
