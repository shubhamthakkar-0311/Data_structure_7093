#include<stdio.h>
#include<conio.h>

void main()
{
    int m1[2][3],m2[3][2];

    int i,j;
    printf("Enter first matrix");
        for(i=0;i<2;i++)
        {
           for(j=0;j<3;j++)
           {
                scanf("%d",&m1[i][j]);
           }
        }

    printf("Enter second matrix");
        for(i=0;i<3;i++)
        {
           for(j=0;j<2;j++)
           {
                scanf("%d",&m2[i][j]);
           }
        }

    printf("\nFrist matrix value");

    for(i=0;i<2;i++)
        {
           for(j=0;j<3;j++)
           {
                printf("%d ",m1[i][j]);
           }
        }

    printf("\nSecond matrix value");

    for(i=0;i<3;i++)
        {
           for(j=0;j<2;j++)
           {
                printf("%d ",m2[i][j]);
           }
        }
}
