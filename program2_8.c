#include <stdio.h>

int minimum(int a[], int n)
{
    if(n == 1)
    {
        return a[0];
    }

    int min = minimum(a, n - 1);

    if(a[n - 1] < min)
    {
        return a[n - 1];
    }
    else
    {
        return min;
    }
}

int maximum(int a[], int n)
{
    if(n == 1)
    {
        return a[0];
    }

    int max = maximum(a, n - 1);

    if(a[n - 1] > max)
    {
        return a[n - 1];
    }
    else
    {
        return max;
    }
}

int main()
{
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Minimum = %d\n", minimum(a, n));
    printf("Maximum = %d", maximum(a, n));

    return 0;
}
