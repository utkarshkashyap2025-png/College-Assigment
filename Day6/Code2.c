#include <stdio.h>
int main ()
{
    int n , i , dec = 0 , bin[100] ;
    printf("Enter the binary no. whose decimal you want to find : ");
    scanf("%d" , &n);
    for (i = 0 ; n > 0 ; i++)
    {
        bin[i] = n % 10 ;
        n = n / 10 ;
    }
    for (i = i - 1 ; i >= 0 ; i--)
    {
        dec = dec * 2 + bin[i] ;
    }
    printf("The decimal equivalent of the given binary no. is : %d" , dec);
    return 0;
}