#include <stdio.h>
int main() 
{
    int n , rem , org , palindrome = 0;
    printf("Enter a number : ");
    scanf("%d" , &n);
    org = n;
    while(n != 0)
    {
        rem = n % 10;
        palindrome = palindrome * 10 + rem;
        n = n / 10;
    }
    if(org == palindrome)
        printf("The number is a palindrome.");
    else
        printf("The number is not a palindrome.");
        
    return 0;
}