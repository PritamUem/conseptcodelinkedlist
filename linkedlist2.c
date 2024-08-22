#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void insert(struct Node **head){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter the data you want to enter: ");
    if(scanf("%d", &newNode->data) != 1){
        printf("Invalid input\n");
        free(newNode);
        return;
    }
    newNode->next = *head;
    *head = newNode;
}

void print(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void freeList(struct Node *head){
    struct Node *temp = head;
    while(temp != NULL){
        struct Node *next = temp->next;
        free(temp);
        temp = next;
    }
}

int main(){
    struct Node *head = NULL;
    insert(&head);
    insert(&head);
    insert(&head);
    print(head);
    freeList(head);
    return 0;
}