/*
http://220.89.64.243/30stair/q_r/q_r.php?pname=q_r
두 자연수를 입력 받아 첫번째 수를 두번째 수로 나눈
몫과 나머지를 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_q_r() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", a/b, a%b);

	return 0;
}