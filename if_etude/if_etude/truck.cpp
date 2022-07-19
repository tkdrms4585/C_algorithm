/*
http://220.89.64.243/30stair/truck/truck.php?pname=truck

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일

int main_truck() {
	int a, b, c, x=168;
	scanf("%d %d %d", &a, &b, &c);

	if (a < 168)
		printf("CRASH %d", a);
	else if (b < 168)
		printf("CRASH %d", b);
	else if (c < 168)
		printf("CRASH %d", c);
	else
		printf("NO CRASH");

	return 0;
}