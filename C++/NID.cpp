#include<iostream>
#include<string>
using namespace std;

   struct Node{
   string name;
   string village;
   int postNumber;
   string district;
  int nidNumber;
  struct Node *next;
   };

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

 Node* insertBeginning(Node *node, Node *head){
    node->next=head;
    head=node;
    return head;


}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    int n;
    cout << "Enter the number of NID records you want to insert: ";
    cin >> n;


        string name, village, district;
        int postNumber, nidNumber;

        cout << "Enter details for NID record " <<endl;
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

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }


    for(int i=0;i<n-1;i++){
        cout << "Enter details for NID record " << i + 1 << ":" << endl;
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

        head = insertBeg(newNode,head);

    }


    cout << "\nNID Information List:" << endl;
    printList(head);

    return 0;
}










