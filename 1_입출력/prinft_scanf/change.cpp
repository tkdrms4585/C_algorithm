/*
http://220.89.64.243/30stair/change/change.php?pname=change
물건 값 입력
1000원을 내면 거슬러 받는 돈을 출력
100원 50원 10원
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_change() {
	int a;
	scanf("%d", &a);

	printf("%d %d %d", (1000-a) / 100, (1000 - a) % 100 / 50, (1000 - a) % 100 % 50 / 10);

	return 0;
}