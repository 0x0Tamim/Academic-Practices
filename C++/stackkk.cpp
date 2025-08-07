#include <iostream>
#include <stack>
using namespace std;

void push(stack<int>& s, int value) {
    s.push(value);
    cout << value << " pushed into the stack.\n";
}

void pop(stack<int>& s) {
    if (s.empty()) {
        cout << "Stack Underflow! Cannot pop.\n";
    } else {
        cout << s.top() << " popped from the stack.\n";
        s.pop();
    }
}

void display(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is empty!\n";
        return;
    }

    cout << "Stack elements (from top to bottom):\n";
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
}

int main() {
    stack<int> s;
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
                push(s, value);  // Pass stack by reference
                break;
            case 2:
                pop(s);
                break;
            case 3:
                display(s);
                break;
            case 4:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
