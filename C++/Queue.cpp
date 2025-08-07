#include <iostream>
using namespace std;

const int MAX = 100;

int queue[MAX];
int front = -1;
int rear = -1;


void insert(int value) {
    if (rear >= MAX - 1) {
        cout << "Queue Overflow! Cannot insert " << value << ".\n";
    } else {
        if (front == -1)
            front = 0;
        queue[++rear] = value;
        cout << value << " inserted into the queue.\n";
    }
}

void deleteElement() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow! No element to delete.\n";
    } else {
        cout << queue[++front] << " deleted from the queue.\n";
        if (front > rear)
            front = rear = -1;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty.\n";
    } else {
        cout << "Queue elements (from front to rear):\n";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << "\n";
        }
    }
}

int main() {
    int choice, value;

    while (true) {

        cout << "\nQueue Operations Menu:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                insert(value);
                break;
            case 2:
                deleteElement();
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
