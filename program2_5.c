#include <stdio.h>

int main()
{
    int base, power, stack[100], top = -1, result = 1, i;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter power: ");
    scanf("%d", &power);

    for(i = 1; i <= power; i++)
    {
        top++;
        stack[top] = base;
    }

    while(top >= 0)
    {
        result = result * stack[top];
        top--;
    }

    printf("Answer = %d", result);

    return 0;
}
