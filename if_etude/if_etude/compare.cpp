/*
http://220.89.64.243/30stair/compare/compare.php?pname=compare
두 수를 입력 받아
앞수가 뒷수보다
크면 >
작으면 <
작으면 = 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일
int main_compare() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("=");
	return 0;
}