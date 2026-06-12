#include <stdio.h>
int main()
{
    int a=0 , b=1 , n , i , c ;
    printf("Enter the term number : ");
    scanf("%d" , &n);
    if(n == 1)
    {
        printf("%d" , a);
    }
    else if(n == 2)
    {
        printf("%d" , b);
    }
    else
    {
        for (i = 2 ; i < n ; i++)
        {
           c = a + b ;
           a = b ;
           b = c ;
        }
        printf("The %dth term of the Fibonacci series is : %d" , n , c);
    }

    return 0;
}