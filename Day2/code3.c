#include <stdio.h>
int main()
{
    int n , product = 1 , rem;
    printf("Enter a number : ");    
    scanf("%d" , &n);
    while(n != 0)
    {
        rem = n % 10;
        product = product * rem;
        n = n / 10;
    }
    printf("The product of the digits is : %d" , product);
    return 0;
}