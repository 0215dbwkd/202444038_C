#include <stdio.h>

int main()
{
    int x,y;
    char op;
    scanf("%d %c %d",&x,&op,&y);
    switch (op)
    {
    case '+':
        printf("%d %c %d = %d",x,op,y,x+y);
        break;
    
    case '-':
        printf("%d %c %d = %d",x,op,y,x-y);
        break;
    case '*':
        printf("%d %c %d = %d",x,op,y,x*y);
        break;
    case '/':
        printf("%d %c %d = %d",x,op,y,x/y);
        break;
    default :
        printf("잘못누름");
        break;
    }
}