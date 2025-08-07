#include <iostream>
#include<stack>
using namespace std;
const int MAX = 100;

stack<int>s;

void push(int value) {
   s.push(value):
        cout << value << " pushed into the stack.\n";
    }
}

void pop() {
   s.pop();
        cout << stack[top--] << " popped from the stack.\n";
    }
}

void display() {
  s.display();
}

int main() {
    stack<int>s;
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

