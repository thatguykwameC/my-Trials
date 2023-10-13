#include <stdio.h>
/*
This function takes two numbers, multiplies
and return the product
*/

int mul(int a, int b)
{
    return a * b;
}

int main(void)
{
    int result = mul(10, 10); /*Takes arguemnts; I used 10 as an example*/
    printf("%d", result);
    return 0;
}