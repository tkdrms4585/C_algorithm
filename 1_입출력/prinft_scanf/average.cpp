/*
http://220.89.64.243/30stair/average/average.php?pname=average
�� ������ �Է� �޾� ��� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_average() {
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("%.2lf", (double)(a + b + c + d) / 4);
	return 0;
}