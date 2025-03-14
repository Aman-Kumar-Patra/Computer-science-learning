//WAP to print the sum of digits of any number.
#include <stdio.h>
int main()
{
    int num,product=1,rem;

    printf("Enter a number:");
    scanf("%d",&num);
    while (num>0)
    {
        rem = num%10;
        product = product*rem;
        num=num/10;
    }
    printf("product of digits of a numbr = %d",product);
    return 0;
}