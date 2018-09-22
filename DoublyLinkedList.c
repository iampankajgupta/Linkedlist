#include<stdio.h>
#include<cs50.h>
struct Node{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*head;
/*
// insert element at the head // 
void insertathead(int data){
    struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head==NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}*/
 // insert at the tail // 
void insertattail(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head==NULL){
        head = newNode;
        return ;
    }
    struct Node*iterate = head;
    while(iterate->next!=NULL){
        iterate = iterate->next;
    }
    iterate->next = newNode;
    newNode->prev = iterate;
}

// Print elements in a linked list // 
void Print(){
    struct Node*iterate = head;
    while(iterate->next!=NULL){
        printf("%i",iterate->data);
        iterate = iterate->next;
    }
    printf("%i",iterate->data);
}
void reversePrint(){
    struct Node*traverse = head;
    if (traverse==NULL){
        return;
    }
    while(traverse->next!=NULL){
        traverse = traverse->next;
    }
    while(traverse->prev!=NULL){
        printf("%i",traverse->data);
        traverse = traverse->prev;
    }
    printf("%i",traverse->data);
}
// deletion from reverse side

void Delete(){
    struct Node*iterate =head;
    while(iterate->next!=NULL){
        iterate = iterate->next;
    }
    head = iterate;
    iterate = iterate->prev->prev;
// deletion of element in doubly circular linkedlist //
void Delete(int n ){
    struct Node*delNode = head;
    if (n==1){
        head = delNode->next;
        return ;
    }
    struct Node*pointing = head;
    for(int i = 0;i<(n-2);i++){
        pointing = pointing->next;
    }
    struct Node*near = pointing;
    near = near ->next;
    pointing = near->next;
    free(near);
}
/*
int main (){
    head = NULL;
    insertathead(1);
    insertathead(2);
    insertathead(3);
    insertathead(4);
    Print();
    printf("\n");
    reversePrint();
}
*/
// for deletion at any position//
int main (){
    head=NULL;
    insertattail(1);
    insertattail(2);
    insertattail(3);
    insertattail(4);
    Delete(2);
    Print();
    printf("\n");
    Delete();
    Delete();
    reversePrint();
}
