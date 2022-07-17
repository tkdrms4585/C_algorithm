/*
http://220.89.64.243/30stair/sec/sec.php?pname=sec
입력 초
출력 날 시 분 초
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_sec() {
	int a;
	scanf("%d", &a);
	int d = a / (24*60*60); 
	int t = a % (24 * 60 * 60) / (60*60);
	int m = a % (24 * 60 * 60) % (60 * 60) / 60;
	int s = a % (24 * 60 * 60) % (60 * 60) % 60;
	printf("%d %d %d %d", d, t, m, s);
	return 0;
}