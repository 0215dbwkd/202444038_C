#include <stdio.h>

int plus(int a, int b)
{
    return a+b;
}
int main()
{
    int a=10,b=20;
    int result;

    //scanf("%d %d", &a, &b);
    result = plus(a,b);
    printf("%d",result);
    return 0;
}