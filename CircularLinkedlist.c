// insertion at the end of circular linked list //
#include<stdio.h>
#include<cs50.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*head;
struct Node*lastNode;
// insert at the end  element in linkedlist // 

void insert(int data){
    struct Node*firstNode = (struct Node*)malloc(sizeof(struct Node));
    firstNode->data = data;
    firstNode->next = NULL;
    if (head==NULL){
        head= firstNode;
        lastNode = firstNode;
        lastNode->next = head;
    }
    else{

        while(lastNode->next!=head){
            lastNode = lastNode->next;
        }
        lastNode->next = firstNode;
        firstNode->next = head;
    }
}

// insertion at the beginning//

void insert(int data){
    struct Node*firstNode = (struct Node*)malloc(sizeof(struct Node));
    firstNode->data = data;
    firstNode->next = NULL;
    if (head==NULL){
        head = firstNode;
        lastNode = firstNode;
        lastNode->next = head;
    }
    firstNode->next = head;
    head = firstNode;
    lastNode->next = head;
}

void Print(){
    struct Node*pointer = head;
    while(pointer->next!=head){
        printf("%i",pointer->data);
        pointer = pointer->next;
    }
    printf("%i",pointer->data);
}
// deletion at the beginning // 
void Delete(){
    struct Node*del = head;
    del->next = head;
    lastNode->next = head;
    free(del);
}
//  delete at the end of the  element of a  linkdlist  //
void Delete(){
    struct Node*del = head;
    while(del->next->next!=head){
        del = del->next;
    }
    del->next = head;
}

// our main function//
int main (){
    head = NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    Delete();
    Print();

}
