#include <stdio.h>
int main ()
{
    int n1 , n2 , arm , rem , i ;
    printf("Enter first number : ");
    scanf("%d" , &n1);
    printf("Enter second number : ");
    scanf("%d" , &n2);
    printf("The armstrong numbers between %d and %d are : " , n1 , n2);
    for (i = n1 ; i <= n2 ; i++)
    {
        int variable = i ;
        arm = 0 ;
        while (variable > 0)
        {
            rem = variable % 10 ;
            arm = rem * rem * rem + arm ;
            variable = variable / 10 ;
        }
        if(arm == i)
        {
            printf("%d " , i);
        }
    }
    return 0;
}