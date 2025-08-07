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

int main() {
    Node* head = nullptr;

    // Adding nodes statically
    Node* node1 = createNode("Alice", "Maple Village", 1234, "Green District", 111111);
    head = insertBeginning(node1, head);

    Node* node2 = createNode("Bob", "Oak Village", 5678, "Blue District", 222222);
    head = insertBeginning(node2, head);

    Node* node3 = createNode("Charlie", "Pine Village", 9101, "Yellow District", 333333);
    head = insertBeginning(node3, head);

    Node* node4 = createNode("Diana", "Cedar Village", 1121, "Red District", 444444);
    head = insertBeginning(node4, head);

    // Print the NID information list
    cout << "\nNID Information List:" << endl;
    printList(head);

    return 0;
}

//inserting by loop
/*for (int i = 0; i < n; i++) {
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


        Node* newNode = createNode(name, village, postNumber, district, nidNumber);


        head = insertBeginning(newNode, head);
    }*/
