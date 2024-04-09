#include <stdio.h>

int main()
{
    int x(int a)
    {
        if(a<=1)
        return a;
        else
        return x(a-1)+x(a-2);
    }
    
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
        printf("%d\n",x(i));
        for(int j=1; j<=x(i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}