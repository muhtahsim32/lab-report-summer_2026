#include<stdio.h>
#include<stdlib.h>

struct node{
   int data;
   struct node* next;
};

int main(){
    struct node *head=malloc(sizeof(struct node));
    head->data=25;
    head->next=NULL;

    struct node *sec=malloc(sizeof(struct node));
    sec->data=31;
    sec->next=NULL;
    head->next=sec;

    struct node *third=malloc(sizeof(struct node));
    third->data=39;
    third->next=NULL;
    sec->next=third;
    
    struct node *ptr=head;
    int flag;
    printf("Enter 1 for Delete Beginning, 2 for Delete End: ");
    scanf("%d",&flag);

    if(head==NULL){
        printf("empty\n");
    }
    else if(flag==1){
        
        struct node *temp=head;
        head=head->next;
        printf("%d deleted from beginning\n", temp->data);
        free(temp);
    }
    else if(flag==2){
        
        if(head->next==NULL){
            
            printf("%d deleted from end\n", head->data);
            free(head);
            head=NULL;
        }
        else{
            struct node *temp=head;
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            printf("%d deleted from end\n", temp->next->data);
            free(temp->next);
            temp->next=NULL;
        }
    }
    else{
        printf("Invalid choice\n");
    }

    if(head==NULL){
        printf("List now: empty\n");
    }
    else{
        printf("List now: ");
        ptr=head;
        while(ptr!=NULL){
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }

    return 0;
}