//WAP to print numbers in reverse order with a difference of 3.
#include <stdio.h>
int main()
{
    int a = 30;

    while (a>=1)
    {
        printf("%d\n",a);
        a-=3;
    }
    
    return 0;
}