#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insert_AtLast(struct node* *head_ref,int newData){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=newData;
    if(*head_ref==NULL){
        newNode->next=NULL;
        *head_ref=newNode;
    }
    else{
        struct node *lastNode=*head_ref;
        while(lastNode->next!=*head_ref && lastNode->next!=NULL)
        lastNode=lastNode->next;
        lastNode->next=newNode;
        newNode->next=*head_ref;
    }
    
}
void display_list(struct node*head){
    if(head==NULL)
    printf("list is EMPTY");
    else{
        struct node *temp=head;
        printf("%d ",head->data);
        temp=temp->next;
        while(temp!=head && temp!=NULL){
            printf(" %d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    struct node *head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));
    struct node *fifth=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    head->next=NULL;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;   
    fourth->data=4;
    fourth->next=fifth;
    fifth->data=5;
    fifth->next=head;    
    display_list(head);
     
    insert_AtLast(&head,6);
    display_list(head); 
    insert_AtLast(&head,7);
    display_list(head->next); 
    return 0;
}