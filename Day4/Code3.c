#include <stdio.h>
int main()
{
    int n , original , armstrong = 0 , remender ;
    printf("Enter a number : ");
    scanf("%d" , &n);
    original = n ;
    while (n > 0)
    {
        remender = n % 10 ;
        armstrong = remender * remender * remender + armstrong ;
        n = n / 10 ;
    }
    if(original == armstrong)
    {
        printf("%d is an armstrong number" , original);
    }
    else
    {
        printf("%d is not an armstrong number" , original);
    }
    return 0;
}