#include <stdio.h>

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