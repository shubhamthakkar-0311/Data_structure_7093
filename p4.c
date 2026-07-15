#include <stdio.h>
#include <conio.h>
void main()
{
    int a[3];
    int b[3];
    int c[6];
    int i;

    printf("Enter 3 elements for array A:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 elements for array B:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 3; i++)
    {
        c[i] = a[i];
        c[i+3] = b[i];
    }

    printf("Merged array C:\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", c[i]);
    }
}
