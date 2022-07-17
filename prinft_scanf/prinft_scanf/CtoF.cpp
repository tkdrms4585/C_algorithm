/*
http://220.89.64.243/30stair/CtoF/CtoF.php?pname=CtoF
¼·¾¾ ¿Âµµ¸¦ È­¾¾ ¿Âµµ·Î º¯È¯
È­¾¾ ¿Âµµ = 9 / 5 * (¼·¾¾¿Âµµ) + 32
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_CtoF() {
	int a;
	scanf("%d", &a);
	printf("%.1lf", (double)9 / 5 * a + 32);
	return 0;
}