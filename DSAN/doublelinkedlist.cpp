#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* previous;
};


void insertAtPosition(Node*& head, Node*& tail, int position, int value) {
    Node* newNode = new Node();// creating a new node
    newNode->data = value;
    newNode->next = nullptr;
    newNode->previous = nullptr;

    if (position == 0) { // Insertion at the head
        newNode->next = head;
        if (head != nullptr) {// if the list isnt empty you make the previous node the new node
            head->previous = newNode;
        }
        head = newNode;// just updates the head to the new node 
        if (tail == nullptr) {
            tail = newNode; // If the list was empty, head and tail are the same
        }
        return;
    }

    Node* current = head;// starting from the head
    int currentPosition = 0;

    while (current != nullptr && currentPosition < position - 1) {
        // loops until the position before the desired position 
        current = current->next;
        currentPosition++;
    }

    if (current == nullptr) { // Position is beyond the end of the list
        std::cout << "Position out of bounds." << std::endl;
        delete newNode;
        return;
    }

    // Insert the new node at the position
    newNode->next = current->next;
    newNode->previous = current;

    if (current->next != nullptr) {
        current->next->previous = newNode;
    }
    else { // If inserting at the tail
        tail = newNode;
    }

    current->next = newNode;
}

// Function to print the list from head to tail
void printListFromHead(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to print the list from tail to head
void printListFromTail(Node* tail) {
    Node* current = tail;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->previous;
    }
    std::cout << std::endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    
    insertAtPosition(head, tail, 0, 4); 
    insertAtPosition(head, tail, 1, 5); 
    insertAtPosition(head, tail, 2, 6);
    printListFromHead(head);
    insertAtPosition(head, tail, 1, 10); 
    
  

    
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
