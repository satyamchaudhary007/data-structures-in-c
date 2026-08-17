#include <stdio.h>

int main()
{
    int stack[5];
    int top = -1;
    int choice, value, pos, i;

    do
    {
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Peek\n");
        printf("5. Peep\n");
        printf("6. Change\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(top == 4)
                {
                    printf("Stack is full\n");
                }
                else
                {
                    printf("Enter value: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                }
                break;

            case 2:
                if(top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Deleted value = %d\n", stack[top]);
                    top--;
                }
                break;

            case 3:
                if(top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    for(i = top; i >= 0; i--)
                    {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                if(top == -1)
                {
                    printf("Stack is empty\n");
                }
                else
                {
                    printf("Top = %d\n", stack[top]);
                }
                break;

            case 5:
                printf("Enter position: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > top + 1)
                {
                    printf("Invalid position\n");
                }
                else
                {
                    printf("Value = %d\n", stack[top - pos + 1]);
                }
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > top + 1)
                {
                    printf("Invalid position\n");
                }
                else
                {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    stack[top - pos + 1] = value;
                }
                break;

            case 7:
                printf("Exit\n");
                break;

            default:
                printf("Wrong choice\n");
        }

    } while(choice != 7);

    return 0;
}
