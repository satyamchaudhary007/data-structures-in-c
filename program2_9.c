#include <stdio.h>

int main()
{
    int queue[5];
    int front = -1;
    int rear = -1;
    int choice, value, i;

    do
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(rear == 4)
                {
                    printf("Queue is full\n");
                }
                else
                {
                    printf("Enter value: ");
                    scanf("%d", &value);

                    rear++;
                    queue[rear] = value;

                    if(front == -1)
                    {
                        front = 0;
                    }
                }
                break;

            case 2:
                if(front == -1 || front > rear)
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    printf("Deleted value = %d\n", queue[front]);
                    front++;

                    if(front > rear)
                    {
                        front = -1;
                        rear = -1;
                    }
                }
                break;

            case 3:
                if(front == -1)
                {
                    printf("Queue is empty\n");
                }
                else
                {
                    for(i = front; i <= rear; i++)
                    {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exit\n");
                break;

            default:
                printf("Wrong choice\n");
        }

    } while(choice != 4);

    return 0;
}
