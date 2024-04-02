#include <stdio.h>

int main(void)
{
    int num=1;
    int sum=0;
    while (num<=10)

    {
        sum=sum+num;
        num++;
    }
    printf("1부터 10까지의 합 = %d\n", sum);
    printf("while문이 끝난 후의 num의 값 = %d", num);

return 0;
}
