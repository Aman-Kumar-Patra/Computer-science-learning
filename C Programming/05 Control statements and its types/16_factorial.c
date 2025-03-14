//WAP to find the factorial of a number
#include <stdio.h>
int main()
{
    int n,fact=1,num;
    printf("Enter a number:");
    scanf("%d",n);
    num = n;
    if (n<0)
    {
        printf("No factorial of a nagative number.");
    }
    else
    {
        while (n>1)
        {
            fact=fact*n;
            n--;
        }
        printf("Factorial of a %d = %d",num,fact);
    }
    
    return 0;
}