/*
http://220.89.64.243/30stair/CtoF/CtoF.php?pname=CtoF
���� �µ��� ȭ�� �µ��� ��ȯ
ȭ�� �µ� = 9 / 5 * (�����µ�) + 32
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_CtoF() {
	int a;
	scanf("%d", &a);
	printf("%.1lf", (double)9 / 5 * a + 32);
	return 0;
}