#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node* next;
};

int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=12;
    head->next=NULL;

    struct node *sec=malloc(sizeof(struct node));
    sec->data=32;
    sec->next=NULL;
    head->next=sec;

    struct node *third=malloc(sizeof(struct node));
    third->data=35;
    third->next=NULL;
    sec->next=third;

    struct node *fourth=malloc(sizeof(struct node));
    fourth->data=46;
    fourth->next=NULL;
    third->next=fourth;

    struct node *fifth=malloc(sizeof(struct node));
    fifth->data=55;
    fifth->next=NULL;
    fourth->next=fifth;

    printf("Main linked list: ");
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

    
    int value;
    int index=3;   

    printf("Enter new value to insert at index %d (4th position): ", index);
    scanf("%d",&value);

    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;

    if(index==0){
        
        newnode->next=head;
        head=newnode;
    }
    else{
        struct node *temp=head;
        int i=0;

        
        while(i < index-1 && temp->next!=NULL){
            temp=temp->next;
            i++;
        }

        newnode->next=temp->next;
        temp->next=newnode;
    }

    printf("%d inserted at index %d\n", value, index);

    printf("List now: ");
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

    return 0;
}