/*
http://220.89.64.243/30stair/triangle/triangle.php?pname=triangle
삼각형의 넓이를 구하는 문제
삼각형의 밑변과 높이를 입력 받는다
넓이 = 밑변 * 높이 / 2
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_triangle() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%.2lf", (double)a * b / 2);
	return 0;
}