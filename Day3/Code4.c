#include <stdio.h>
int main()
{
    int n1 , n2 , i ;
    printf("Enter first number : ");
    scanf("%d" , &n1);  
    printf("Enter second number : ");
    scanf("%d" , &n2);
    printf("The LCM of %d and %d is : " , n1 , n2);
    for (i = n1 > n2 ? n1 : n2 ; ; i++)
    {
        if(i % n1 == 0 && i % n2 == 0)
        {
            printf("%d" , i);
            break;
        }
    }
    return 0;
}