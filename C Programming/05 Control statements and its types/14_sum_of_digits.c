//WAP to print the sum of digits of any number.
#include <stdio.h>
int main()
{
    int num,sum=0,rem;

    printf("Enter a number:");
    scanf("%d",&num);
    while (num>0)
    {
        rem = num%10;
        sum = sum+rem;
        num=num/10;
    }
    printf("Sum of digits of a numbr = %d",sum);
    return 0;
}