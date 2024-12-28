

#include <iostream>
using namespace std;


struct node {
    int data;// space to store data
    struct node * link;// pointer that can tie it to another box
    // there should only be one link but can have many datatypea
    
};
int main() {
    struct node* head = NULL;// we are basically starting the box but its set to null / empty
    head = (struct node*)malloc(sizeof(struct node));// we are asking for space in the box and malloc gives the space and size of returns the size
    // syntax for malloc pointer_name = (cast-type*) malloc(size);
    head->data = 20;// we are opening the box and giving it the number 20
    head->link = NULL;// we are saying it doesnt link to any other box

    // here we have assigned data to another box called curr
    struct node* curr = (struct node*)malloc(sizeof(struct node));
    curr->data = 48;
    curr->link = NULL;
    printf("first box:%d\n", head->data);
    printf("second box%d\n", curr->data);
   

    head->link = curr;// this is basically linking the head box to the curr box
    curr = (struct node*)malloc(sizeof(struct node)); // this is just creating the third box
    curr->data = 3;
    curr->link = NULL;
    head->link->link = curr;// this means go to the second box and from the second box go to the third
    /*
    looks like this
       [ head ] --> [ curr(48) ] --> [ curr(3) ] --> NULL
             20           48              3

    
    
    */
    printf("third box:%d\n", head->link->link->data);

    return 0;



};
