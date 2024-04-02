#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, result;
    result =0;
    scanf_s("%d %d, &num1, &num2, result");
    result = num1 + num2;
    printf("%d + %d =d\n",num1 ,num2 ,result);

    result = num1 - num2;
    printf("%d - %d =d\n",num1 ,num2 ,result);

    result = num1 * num2;
    printf("%d + %d =d\n",num1 ,num2,result);

    result = num1 - num2;
    printf("%d / %d =f",num1 ,num2 ,(float)num1/num2);

    return 0;
}