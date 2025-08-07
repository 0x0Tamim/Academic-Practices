#include <iostream>
#include <string>
using namespace std;

// Structure definition for a Node
struct Node {
    string name;
    string village;
    int postNumber;
    string district;
    int nidNumber;
    Node* next;
};

// Function to create a new node
Node* createNode(string name, string village, int postNumber, string district, int nidNumber) {
    Node* newNode = new Node();
    newNode->name = name;
    newNode->village = village;
    newNode->postNumber = postNumber;
    newNode->district = district;
    newNode->nidNumber = nidNumber;
    newNode->next = nullptr;
    return newNode;
}

// Function to print the linked list
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
        cout << "District: " << temp->district << endl;
        cout << "NID Number: " << temp->nidNumber << endl;
        cout << "---------------------------" << endl;
        temp = temp->next;
    }
}

// Function to insert a node at the beginning of the list
Node* insertBeginning(Node* node, Node* head) {
    node->next = head;
    head = node;
    return head;
}

// Function to search for a node by name
void searchByName(Node* head, const string& searchName) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->name == searchName) {
            cout << "Record Found:" << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Village: " << temp->village << endl;
            cout << "Post Number: " << temp->postNumber << endl;
            cout << "District: " << temp->district << endl;
            cout << "NID Number: " << temp->nidNumber << endl;
            return; // Exit after finding the first match
        }
        temp = temp->next;
    }
    cout << "No record found for the name: " << searchName << endl;
}

int main() {
    Node* head = nullptr;

    int n;
    cout << "Enter the number of NID records you want to insert: ";
    cin >> n;

    string name, village, district;
    int postNumber, nidNumber;

    // Input records using a loop
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for NID record " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Village: ";
        getline(cin, village);
        cout << "Post Number: ";
        cin >> postNumber;
        cin.ignore();
        cout << "District: ";
        getline(cin, district);
        cout << "NID Number: ";
        cin >> nidNumber;

        // Create a new node and insert it at the beginning
        Node* newNode = createNode(name, village, postNumber, district, nidNumber);
        head = insertBeginning(newNode, head);
    }

    // Print the NID information list
    cout << "\nNID Information List:" << endl;
    printList(head);

    // Search for a record by name
    string searchName;
    cout << "\nEnter a name to search: ";
    cin.ignore();
    getline(cin, searchName);
    searchByName(head, searchName);

    return 0;
}

