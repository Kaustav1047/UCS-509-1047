
#include <stdio.h>

int main()
{
    int a[5], i, j, found = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Duplicate values are:\n");

    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
    {
        printf("No duplicates found");
    }

    return 0;
}
