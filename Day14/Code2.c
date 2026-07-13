#include <stdio.h>
int main()
{
    int arr[100], i, n, object, count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the elment to find frequency of that element: ");
    scanf("%d", &object);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == object)
        {
            count++;
        }
    }
    printf("Frequency of %d is %d", object, count);
    return 0;
}