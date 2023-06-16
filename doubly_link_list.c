#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
void push_at_front(struct node* *head_ref,int newData){
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=newData;
    newNode->prev=NULL;
    newNode->next=*head_ref;
    if(*head_ref!=NULL)
    (*head_ref)->prev=newNode;
    *head_ref=newNode;
}
void insert_in_middle(struct node* prev,int newData){
    if(prev==NULL || prev->next==NULL)
    {
        printf("wrong INPUT");
        return;
    }
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=newData;
    newNode->prev=prev;
    prev->next->prev=newNode;
    if(prev->next!=NULL)
    newNode->next=prev->next;
    prev->next=newNode;
}
void insert_at_last(struct node* *head_ref,int newData){
    struct node*newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=newData;
    newNode->next=NULL;
    if(*head_ref==NULL){
        newNode->prev=NULL;
        *head_ref=newNode;
        return;
    }
    else{
        struct node *last=*head_ref;
        while(last->next!=NULL)
        last=last->next;
        newNode->prev=last;
        last->next=newNode;
    }
}
void print_list(struct node *ptr){
    if(ptr==NULL){
    printf("list is EMPTY");
    return;
    }
    while(ptr!=NULL){
    printf("%d ",ptr->data);
    ptr=ptr->next;
}
}
int main(){
struct node *head=NULL;
push_at_front(&head,2);
push_at_front(&head,8);
push_at_front(&head,1);
print_list(head);//will print 1 8 2 
insert_in_middle(head->next,4);
insert_in_middle(head->next,6);
printf("\n");
print_list(head);
insert_at_last(&head,100);
insert_at_last(&head,200);
insert_at_last(&head,300);
printf("\n");
print_list(head);
return 0;

}
