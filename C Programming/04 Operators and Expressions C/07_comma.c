#include <stdio.h>
int main()
{
/*    int sum,a,b,c;
    sum=(a=10,b=12,c=9,a+b+c);
    printf("sum=%d",sum);
    return 0;
*/
int a=12,b=10,temp;
printf("a=%d and b=%d\n",a,b);
temp=a,a=b,b=temp;
printf("a=%d and b=%d",a,b);

}