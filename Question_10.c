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

    int index=2;   

    if(head==NULL){
        printf("List is already empty\n");
    }
    else if(index==0){
        
        struct node *temp=head;
        head=head->next;
        printf("%d deleted from index %d\n", temp->data, index);
        free(temp);
    }
    else{
        struct node *temp=head;
        int i=0;

        while(i < index-1 && temp->next!=NULL){
            temp=temp->next;
            i++;
        }

        if(temp->next==NULL){
            printf("Position does not exist\n");
        }
        else{
            struct node *del=temp->next;
            temp->next=del->next;
            printf("%d deleted from index %d\n", del->data, index);
            free(del);
        }
    }

    printf("New linked list: ");
    ptr=head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

    return 0;
}