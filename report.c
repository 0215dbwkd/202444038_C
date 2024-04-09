//직각삼각형

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("세변 변의 길이를 입력하세요");
    scanf("%d %d %d",&a,&b,&c); 

    int d,e,f;
    d=a*a;
    e=b*b;
    f=c*c;

    if (d==e+f)
    {
        printf("%d가 빗변인 직각삼각형입니다.",a);
    }
    else if (e==d+f)
    {
        printf("%d가 빗변인 직각삼각형입니다.",b);
    }
    else if (f==d+e)
    {
        printf("%d가 빗변인 직각삼각형입니다.",c);
    }
    else
    {
        printf("직사각형이 아님");
    }
    return 0;
}