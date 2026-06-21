#include <stdio.h>
int SumDigits(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10 + SumDigits(n / 10));
}
int main()
{
    int n ;
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Please enter a non-negative number.");
    else
        printf("The sum of the digits of %d is %d.", n, SumDigits(n));
    return 0;
}