#include <stdio.h>

int main()
{
    char str[100];
    char stack[100];
    int top = -1;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        top++;
        stack[top] = str[i];
    }

    printf("Reverse string: ");

    for(i = top; i >= 0; i--)
    {
        printf("%c", stack[i]);
    }

    printf("\n");

    return 0;
}
