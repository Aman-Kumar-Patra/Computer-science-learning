//Relational Operators
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    if (a < b)
    {
        printf("%d is less than %d",a,b);
    }
    if (a <= b)
    {
        printf("%d is less than and equal to %d",a,b);
    }
    if (a>b)
    {
        printf("%d is grater than %d",a,b);
    }
    
    
    return 0;
}