#include <stdio.h>
int main()
{
    int n , fact = 1 , i , temp , rem , sum = 0 ;
    printf("Enter the no. which you want to find that is a strong no. or not : ");
    scanf("%d" , &n);
    temp = n ;
    while ( n > 0)
    {
        rem = n%10 ;
        fact = 1 ;
        for (i =rem ; i > 0 ; i--)
        {
            fact = fact * i ;
        }
        sum = sum + fact ;
        n = n/10 ;
    }

    if (sum == temp)
    {
        printf("The given no. is a strong no.\n");
    }
    else
    {
        printf("The given no. is not a strong no.\n");
    }
    return 0;
}