#include <stdio.h>
#define max 100

int main()
{
    int arr[max], freq[max];
    int i, j, n, count;

    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;

    }

    for(i=0; i<n; i++)
    {
        count = 1;

        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;

            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    printf("\nUnique elements in the array are: ");
    for(i=0; i<n; i++)
    {
        if(freq[i] >= 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
