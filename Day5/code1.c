#include <stdio.h>
int main ()
{
    int n , sum = 0 , i ;
    printf("Enter the no. which you want to check is prefect no. or not : ");
    scanf("%d" , &n);
    for (i = 1 ; i < n ; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i ;
        }
    }
    if (sum == n)
    {
        printf("%d is a prefect number." , n);
    }
    else
    {
        printf("%d is not a prefect number." , n);
    }
    return 0;
}