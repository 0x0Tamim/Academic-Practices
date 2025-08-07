#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    string village;
    int postNumber;
    int nidNumber;
    Node* next;
};

Node* createNode(string name, string village, int postNumber, int nidNumber) {
    Node* newNode = new Node();
    newNode->name = name;
    newNode->village = village;
    newNode->postNumber = postNumber;
    newNode->nidNumber = nidNumber;
    newNode->next = nullptr;
    return newNode;
}

void printList(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty." << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr) {
        cout << "Name: " << temp->name << endl;
        cout << "Village: " << temp->village << endl;
        cout << "Post Number: " << temp->postNumber << endl;
        cout << "NID Number: " << temp->nidNumber << endl;
        cout << "---------------------------" << endl;
        temp = temp->next;
    }
}

Node* insertBeginning(Node* head, Node* node) {
    node->next = head;
    head = node;
    return head;
}

Node* insertEnd(Node* head, Node* node) {
    if (head == nullptr) {
        return node;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = node;
    return head;
}

Node* insertAtPosition(Node* head, Node* node, int position) {
    if (position == 1) {
        return insertBeginning(head, node);
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds. Inserting at the end." << endl;
        return insertEnd(head, node);
    }

    node->next = temp->next;
    temp->next = node;
    return head;
}

Node* deleteByPosition(Node* head, int position) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return head;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp->next != nullptr; i++) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Position out of bounds." << endl;
        return head;
    }

    Node* nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    return head;
}

void searchByName(Node* head, const string& searchName) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->name == searchName) {
            cout << "Record Found:" << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Village: " << temp->village << endl;
            cout << "Post Number: " << temp->postNumber << endl;
            cout << "NID Number: " << temp->nidNumber << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "No record found for the name: " << searchName << endl;
}

int main() {
    Node* head = nullptr;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Specific Position\n";
        cout << "4. Delete by Position\n";
        cout << "5. Search by Name\n";
        cout << "6. Print List\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        string name, village;
        int postNumber, nidNumber, position;

        switch (choice) {
            case 1:
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Village: ";
                getline(cin, village);
                cout << "Enter Post Number: ";
                cin >> postNumber;
                cout << "Enter NID Number: ";
                cin >> nidNumber;
                head = insertBeginning(head, createNode(name, village, postNumber, nidNumber));
                break;

            case 2:
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Village: ";
                getline(cin, village);
                cout << "Enter Post Number: ";
                cin >> postNumber;
                cout << "Enter NID Number: ";
                cin >> nidNumber;
                head = insertEnd(head, createNode(name, village, postNumber, nidNumber));
                break;

            case 3:
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Village: ";
                getline(cin, village);
                cout << "Enter Post Number: ";
                cin >> postNumber;
                cout << "Enter NID Number: ";
                cin >> nidNumber;
                cout << "Enter Position: ";
                cin >> position;
                head = insertAtPosition(head, createNode(name, village, postNumber, nidNumber), position);
                break;

            case 4:
                cout << "Enter Position to Delete: ";
                cin >> position;
                head = deleteByPosition(head, position);
                break;

            case 5:
                cout << "Enter Name to Search: ";
                cin.ignore();
                getline(cin, name);
                searchByName(head, name);
                break;

            case 6:
                printList(head);
                break;

            case 7:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 7);

    return 0;
}
