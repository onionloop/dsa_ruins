#include <stdio.h>
#include <stdlib.h>
struct Node{
    
    int data;
    struct Node *next;
    struct Node *prev;
    
};
void insertAtBeg(struct Node **head, int x){
    
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode -> data = x;
    newNode -> next = *head;
    newNode -> prev = NULL;
    
    if(*head != NULL){
        (*head) -> prev = newNode;
    }
    
    *head = newNode;
    
}

void insertAtEnd(struct Node **head, int x){
    

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node *temp = *head;
    
    newNode -> data = x;
    newNode -> next = NULL;
    
    if(*head == NULL){
        newNode -> prev= NULL;
        *head = newNode;
        return;
    }
    
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    newNode -> prev = temp;
    
    temp -> next = newNode;
}

void delfromBeg(struct Node **head){
    
    if(*head == NULL){
        printf("List is Empty");
        return;
    }
    

    
    struct Node *temp = *head;
    
    *head = (*head) -> next;
    
    if(*head != NULL){
    (*head) -> prev = NULL;
        
    }
    
    free(temp);
}

void delfromEnd(struct Node **head){
    
    if(*head == NULL){
        printf("List is empty");
        return;
    }
    
    if((*head)-> next == NULL){
        free(*head);
        *head = NULL;
        return;
    }
    
    struct Node *temp = *head;
    
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    temp -> prev -> next = NULL;
    
    free(temp);
    

}