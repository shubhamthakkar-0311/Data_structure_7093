#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[100], n, pos, i, choice = 1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while(choice == 1 && n > 0)
    {
        printf("\nCurrent Array: ");
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\nEnter the position to delete (1 to %d): ", n);
        scanf("%d", &pos);
        if(pos < 1 || pos > n)
        {
            printf("Invalid position!\n");
        }
        else
        {
            for(i = pos - 1; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
            printf("Array after deletion:\n");
            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            if(n == 0)
            {
                printf("\nAll elements have been deleted.\n");
                break;
            }
        }
        printf("\nDo you want to delete another element? (1=YES, 0=NO) : ");
        scanf("%d", &choice);
    }
    return 0;
}
