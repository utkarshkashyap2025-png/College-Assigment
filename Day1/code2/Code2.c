#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the value of the no. whose table you want to print: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}