#include <stdio.h>
int main ()
{ 
    int base , exp , i ;
    long long int p=1 ;
    printf("Enter the base and exponent : ");
    scanf("%d %d" , &base , &exp);
    for (i = 1 ; i <= exp ; i++)
    {
        p = p * base ;
    }
    printf("The value of %d raised to the power %d is : %lld" , base , exp , p);
    return 0;
}