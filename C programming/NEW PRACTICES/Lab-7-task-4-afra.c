#include <stdio.h>
int main()
{

    int i,j,n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n], visited[n];
    printf("Enter %d elements in the array:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
        visited[i] = 1;
    }
    for(i=0; i<n; i++)
    {
//        if(visited[i]==0)
//            continue;
        for(j=i+1; j<n; j++)
        {
            if(array[i] == array[j])
            {
            }
            visited[j] = 0;
        }
    }
    printf("\nUnique elements in the array are: ");
    for(i=0; i<n; i++)
    {
        if(visited[i] != 1)
            continue;
        printf("%d ", array[i]);
    }
    return 0;
}
