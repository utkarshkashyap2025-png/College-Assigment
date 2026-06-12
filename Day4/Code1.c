#include <stdio.h>
int main()
{
    int a=0 , b=1 , n , i , c ;
    printf("Enter the number of terms : ");
    scanf("%d" , &n);
    printf("The Fibonacci series is : ");
    printf("%d " , a);
    printf("%d " , b);
    for (i = 2 ; i < n ; i++)
    {
       c = a + b ;
       a = b ;
       b = c ;
        printf("%d " , c);
    }
    return 0;
}