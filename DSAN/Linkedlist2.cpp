

#include <iostream>
using namespace std;


struct node {
    int data;// space to store data
    struct node* link;// pointer that can tie it to another box
    // there should only be one link but can have many datatypea

};
void countnodes(struct node *head) {
    int count = 0;
    if (head == NULL) {
        cout << "List is empty";
    }
    struct node* ptr  = head;// pointer to head (the first box)
    while (ptr != NULL) {
        count++;
        ptr = ptr->link;// moves to the next box

    }
    cout << count << endl;


}
void printinfo(struct node* head) {
    
    if (head == NULL) {
        cout << "List is empty";
    }
    struct node* ptr = head;// pointer to head (the first box)
    while (ptr != NULL) {
        cout << ptr->data << endl;//prints the calye inside the current box
        ptr = ptr->link;

    }



}
void insert_node_end(struct node* head,int data) {
    struct node* ptr, * temp;// pointer to head (the first box) and temp to hold the data we are adding
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;// temp now holds the data being insterted in the function
    temp->link = NULL;// we are setting it to null because its the last box
    
    while (ptr->link != NULL) {
       // while there are still links
        ptr = ptr->link;// we are ust moving through the box

    }
    ptr->link = temp;// we set the data in the last node to temp


}
void insert_node_beginning(struct node** head, int data) {
    struct node* temp; // Create a pointer for the new box
    temp = (struct node*)malloc(sizeof(struct node)); 
    temp->data = data; // Set the data of the new box
    temp->link = *head; // Point the new box to the current first box (head)
    *head = temp; // Make the new box the new head (first box)
}


