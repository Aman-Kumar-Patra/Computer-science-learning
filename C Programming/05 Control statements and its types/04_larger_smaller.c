// WAP to print larger and smaller of two numbers
#include <stdio.h>
int main()
{
    int num_1, num_2;
    printf("Enter two number: ");
    scanf("%d%d", &num_1, &num_2);
    if (num_1 > num_2)
    {
        printf("larger number =%d and smaler =%d", num_1, num_2);
    }
    else
    {
        printf("larger number =%d and smaler =%d", num_2, num_1);
        
    }
    
    return 0;
}