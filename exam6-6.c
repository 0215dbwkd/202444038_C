#include <stdio.h>

int main()
{
    int jumsu;
    char grade;

    printf("점수 입력 :");
    scanf("%d", &jumsu);

    if(jumsu >= 90)
    {
        grade = 'A';
    }
    else if(jumsu >= 80)
    {
        grade = 'B';
    }
    else if(jumsu >= 70)
    {
        grade = 'C';
    }
    else if(jumsu >= 60)
    {
        grade = 'D';
    }
    else if(jumsu >= 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("당신의 학점은 : %c",grade);
    return 0;
}