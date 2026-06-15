#include  <stdio.h>
int main ()
{
    int n , fact=1 , result=0 , rem , variable ;
    printf("Enter the number which you want to check that it is strong or not : ");
    scanf("%d" , &n);
    variable = n ;
    while (variable > 0)
    {
        rem = variable % 10 ;
        fact = 1 ;
        for (int i = 1 ; i <= rem ; i++)
        {
            fact = fact * i ;
        }
        result = result + fact ;
        variable = variable / 10 ;
    }
    if (result == n)
    {
        printf("The number is a strong number.");
    }
    else
    {
        printf("The number is not a strong number.");
    }
    return 0;
}