/*
http://220.89.64.243/30stair/swimming/swimming.php?pname=swimming
1~7 숫자는 각각 월~일요일에 해당
월, 수, 금 요일 수영을 하러 갈때 수영장 가는 날인지 체크
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일

int main_swim() {
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 3 || a == 5)
		printf("enjoy");
	else
		printf("oops");
	return 0;
}