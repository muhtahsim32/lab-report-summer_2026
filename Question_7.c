#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node* next;
};

int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=34;
    head->next=NULL;

    struct node *sec=malloc(sizeof(struct node));
    sec->data=45;
    sec->next=NULL;
    head->next=sec;

    struct node *third=malloc(sizeof(struct node));
    third->data=55;
    third->next=NULL;
    sec->next=third;

    struct node *ptr=head;
    int value,flag;
    printf("Enter value to add: ");
    scanf("%d",&value);
    printf("Enter 1 for Beginning, 2 for End: ");
    scanf("%d",&flag);

    if(flag==1){
        
        struct node *newnode=malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=head;
        head=newnode;
        printf("%d added at beginning\n", value);
    }
    else if(flag==2){

        struct node *newnode=malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=NULL;

        struct node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        printf("%d added at end\n", value);
    }
    else{
        printf("Invalid choice\n");
    }

    printf("Linked list now: ");
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

    return 0;
}