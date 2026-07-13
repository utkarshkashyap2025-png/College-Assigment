#include <stdio.h>
int main ()
{
    int arr[100] , even=0 , odd=0 , i , n ;
    printf("Enter the no. of elements : ");
    scanf("%d",&n) ;
    printf("Enter the elements : ");
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]) ;
        if(arr[i] % 2 == 0)
        {
            even++ ;
        }
        else
        {
            odd++ ;
        }
    }

    printf("Number of even elements : %d\n", even);
    printf("Number of odd elements : %d", odd);

    return 0;
}
