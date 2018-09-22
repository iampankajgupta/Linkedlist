// Insertion at the end and beginning  of the linked list and deletion at any place  // 

#include<stdio.h>
#include<cs50.h>
struct Node{
int data;
struct Node*next
}
struct Node*head;
// insert a node in a LinkedList // 
void insert(int data){
struct Node*firstNode = (struct Node*)malloc(sizeof(struct Node));
firstNode->data = data;
firstNode->next =next ;
if (head==NULL){
head = firstNode;
return;
}
struct Node*iterate = head;
while(iterate->next!=NULL){
iterate = iterate->next;
}
iterate->next = firstNode;
}
///////////////////////////////////////////////////
// insert at the beginning of the linkedlist//
struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;
firstNode->next = head;
head = firstNode;

///////////////////////////////////////////////////

// print the elements of linked list // 
void Print (){
struct Node*iterate = head;
  while(iterate->next!=NULL){
  printf("%i",iterate->data);
  iterate = iterate->next;
  }
  printf("%i",iterate->data);
}
// deletion of elements in a linkedlist// 
void delete(int n ){
  struct Node*first = head;
  struct Node*second = first;
if (n==1){
head = head->next;
  return;
}
 for (int i = 0;i<(n-2);i++){
 second  = second->next;
   first->next = second;
   free(second);
 }
  
}
int main (){
head = NULL;
insert(1);
insert(2);
insert(3);
insert(4);
Print();
}
