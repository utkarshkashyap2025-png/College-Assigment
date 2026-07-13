#include <stdio.h>
int main ()
{
    int arr[100] , i , n , object , found=0 ;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]) ;
    }
    printf("Enter the object to search: ");
    scanf("%d",&object) ;
    for(i = 0 ; i < n ; i++)
    {
        if(arr[i] == object)
        {
            found = 1 ;
            break ;
        }
    }
    if(found == 1)
    {
        printf("Object found at position %d", i+1);
    }
    else
    {
        printf("Object not found");
    }
    return 0;
}