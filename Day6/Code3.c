#include <stdio.h>
int main ()
{
    int n , bit=0 ;
    printf("Enter the no. whose bit value you want to find : ");
    scanf("%d" , &n);   
    while (n > 0)
    {
        bit++;
        n = n / 2 ;
    }   
    printf("The number of bits in the given number is : %d" , bit);
    return 0;
}