#include <stdio.h>
int main ()
{
    int n , i , prime = 1 , j ;
    printf("Enter the no. whose biggest prime factor you want to find : ");
    scanf("%d" , &n);
    for (i = n/2 ; i > 1 ; i--)
    {
        if ( n % i == 0 )
        { 
         prime = 1 ;
            for (j = 2 ; j*j <= i ; j++)
            {
                if (i % j == 0)
                {
                    prime = 0 ;
                    break;
                }
            }
            if (prime == 1)
            {
                printf("The biggest prime factor of %d is : %d" , n , i);
                break;
            }
        }
    }
    return 0;
}