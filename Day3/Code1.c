#include <stdio.h>
int main()
{
    int n , prime = 1 , i;
    printf("Enter a number : ");
    scanf("%d" , &n);
    for (i = 2 ; i*i <= n ; i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime == 1)
    {
        printf("The number is a prime number.");
    }
    else
    {
        printf("The number is not a prime number.");
    }
    return 0;
}