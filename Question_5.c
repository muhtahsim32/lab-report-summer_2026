#include<stdio.h>
#define MAX 8

int main(){
    int stack[MAX] = {11,15,19,29,65,68,89};
    int top = 6;
    int value;
    int deletevalue;
    int flag;

    printf("Stack :");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    printf("Enter 1 for Push, 2 for Pop: ");
    scanf("%d", &flag);

    if (flag == 1) {
        
        printf("Enter push value: ");
        scanf("%d", &value);

        if (top == MAX - 1) {
            printf("Stack overflow, cannot push %d\n", value);
        }
        else {
            top++;
            stack[top] = value;
            printf("Pushed value %d\n", value);
        }
    }
    else if (flag == 2) {
        
        if (top == -1) {
            printf("Stack underflow\n");
        }
        else {
            deletevalue = stack[top];
            top--;
            printf("Deleted value = %d\n", deletevalue);
        }
    }
    else {
        printf("Invalid choice\n");
    }

    if (top == -1) {
        printf("Stack now: empty\n");
    } else {
        printf("Stack now: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }

    return 0;
}