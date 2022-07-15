/*
* http://220.89.64.243/30stair/area/area.php?pname=area
* 사각형 넓이 구하기
* 두 자연수를 입력 받고
* 사각형의 넓이 출력
*/ 



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_area()
{
    int a, b;

    scanf("%d%d", &a, &b);
    printf("%d", a * b);

    return 0;
}