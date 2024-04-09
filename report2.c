#include <stdio.h>

 int x(int n)
    {
    if(n<=1)
    return n;
    else
    return x(n-1)+x(n-2);
    }

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("%d\n",x(i));
    }
    return 0;
}