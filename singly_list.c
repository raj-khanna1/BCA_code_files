#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void print_linklist(struct node *ptr){
    if(ptr==NULL)
    printf("list is empty..");
    else{
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
void push(struct node* *head_ref,int newData){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=newData;
    newNode->next=*head_ref;
    *head_ref=newNode;
}
void append_in_middle(struct node *prev,int newData){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=newData;
    newNode->next=prev->next;
    prev->next=newNode;
}
void append_at_last(struct node* *head_ref,int newData){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=newData;
    newNode->next=NULL;
    struct node *temp=*head_ref;
    if(*head_ref==NULL)
    *head_ref=newNode;
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
int main(){
    struct node *head=NULL;
    push(&head,10);
    push(&head,20);
    push(&head,49);
    print_linklist(head);
    printf("\n");
    append_in_middle(head->next,30);
    print_linklist(head);
    printf("\n");
    append_at_last(&head,100);
    print_linklist(head);
    return 0;
}