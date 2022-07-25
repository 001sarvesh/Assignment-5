// WAP to print table of n 

#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of number whose table you want\n ");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i, n*i);
    }
    



    return 0;
}