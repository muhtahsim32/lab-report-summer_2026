#include <stdio.h>
#define MAX 6

int main() {
    int queue[MAX] = {15, 22, 35, 65, 29};
    int front = 0;
    int rear = 4;
    int value, deletedvalue,flag;

    printf("Current queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d\t", queue[i]);
    }
    printf("\n");

    printf("Enter 1 for Enqueue, 2 for Dequeue: ");
    scanf("%d", &flag);

    if (flag == 1) {
        
        printf("Enter a value to enqueue: ");
        scanf("%d", &value);

        if (rear == MAX - 1) {
            printf("Queue Overflow! Cannot enqueue %d\n", value);
        } else {
            if (front == -1) front = 0;
            rear++;
            queue[rear] = value;
            printf("%d enqueued to queue\n", value);
        }
    }
    else if (flag == 2) {
        
        if (front == -1 || front > rear) {
            printf("Queue Underflow! Cannot dequeue\n");
        } else {
            deletedvalue = queue[front];
            printf("%d dequeued from queue\n", deletedvalue);

            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front++;
            }
        }
    }
    else {
        printf("Invalid choice\n");
    }

    if (front == -1 || front > rear) {
        printf("Queue now: empty\n");
    } else {
        printf("Queue now: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}