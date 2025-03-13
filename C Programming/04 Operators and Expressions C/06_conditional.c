//Conditional Operators
#include <stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    max=a>b?a:b;
    printf("Larger of %d and %d is %d",a,b,max);
    return 0;
}