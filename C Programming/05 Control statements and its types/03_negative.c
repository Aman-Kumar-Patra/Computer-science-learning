//print a message if negative number is entered
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if (num<0)
    {
        printf("Number entered is negative\n");
    }
    printf("value of num is %d",num);
    return 0;
}