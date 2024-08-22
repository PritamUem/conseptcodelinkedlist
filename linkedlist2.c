#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};struct Node *head ,*newNode;

void insert(struct Node **head){
newNode=(struct Node*)malloc(sizeof(struct Node));
if(newNode==NULL){
    printf("failed");
    return;
}
printf("enter the data you wanrt to enter:");
scanf("%d",&newNode->data);
newNode->next=*head;
*head=newNode;
}
void print(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        
        temp=temp->next;
    }
    printf("\n");
}
int main(){
struct Node *head=NULL;
insert(&head);
insert(&head);
insert(&head);
//passing the adress of head through &head;
print(head);
return 0;
}
