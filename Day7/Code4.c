#include <stdio.h>
int Reverse( int n )
{
     if ( n < 10 )
         return n ;
    else ( n >= 10 ) ;
        return ( n % 10 * 10 + Reverse(n / 10) ) ;
}
int main()
{
    int n ;
    printf("Enter a number to reverse it: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Please enter a non-negative number.");
    else
        printf("The reverse of %d is %d.", n, Reverse(n));
    return 0;
}