/*
http://220.89.64.243/30stair/saju/saju.php?pname=saju
생년 월 일을 입력받아
연도 + 월 + 일 의 마지막 숫자가 0아면 '운수대통!'
그렇지 않다면 '노력하세요!' 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일

int main_saju() {
	int y, m, d;
	scanf("%d %d %d", &y, &m, &d);

	y += m + d;

	if (y % 10 == 0)
		printf("운수대통!");
	else
		printf("노력하세요!");

	return 0;
}