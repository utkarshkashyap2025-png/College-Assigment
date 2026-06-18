#include <stdio.h>
int main ()
{
    int n , i , bin[100] ;
    printf("Enter the decimal no. whose binary you want to find : ");
    scanf("%d" , &n);
    for (i = 0 ; n > 0 ; i++)
    {
        bin[i] = n % 2 ;
        n = n / 2 ;
    }
    printf("The binary equivalent of the given decimal no. is : ");
    for (i = i - 1 ; i >= 0 ; i--)
    {
        printf("%d" , bin[i]);
    }
    return 0;
}