#include <stdio.h>
int isArmstrong(int num) 
{
    int original = num, rem, sum = 0;

    while(num != 0) 
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if(sum == original)
        return 1;
    else
        return 0;
}

int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isArmstrong(num))
        printf("%d is an Armstrong Number", num);
        
    else
        printf("%d is Not an Armstrong Number", num);

    return 0;
}