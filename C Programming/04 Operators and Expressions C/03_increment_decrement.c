//increment (++) and Decrement (--) Operators

#include <stdio.h>
int main()
{
    //increment x = x + 1; x++;

    //Decrement x=x-1; x--;

    //prefix ++x --x
/*   
    int x = 8;
    printf("x=%d\n",x);
    printf("x=%d\n",++x);
    printf("x=%d\n",--x);
*/ 
    //postfix x++ x--
    int x = 8;
    printf("x = %d\n",x);
    printf("x = %d\n",x++);
    printf("x = %d\n",x--);
    printf("x = %d\n",x);
    
    return 0;
}