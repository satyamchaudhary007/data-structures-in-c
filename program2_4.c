#include <stdio.h>

int main()
{
    int n, stack[100], top = -1, fact = 1, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        top++;
        stack[top] = i;
    }

    while(top >= 0)
    {
        fact = fact * stack[top];
        top--;
    }

    printf("Factorial = %d", fact);

    return 0;
}
