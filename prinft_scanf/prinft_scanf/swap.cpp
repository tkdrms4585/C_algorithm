/*
* http://220.89.64.243/30stair/swap/swap.php?pname=swap
* 두수의 교환
* 두 정수를 입력 받아 바꾸어서 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_swap() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d %d", b, a);
	return 0;
}