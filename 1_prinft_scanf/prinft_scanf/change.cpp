/*
http://220.89.64.243/30stair/change/change.php?pname=change
���� �� �Է�
1000���� ���� �Ž��� �޴� ���� ���
100�� 50�� 10��
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_change() {
	int a;
	scanf("%d", &a);

	printf("%d %d %d", (1000-a) / 100, (1000 - a) % 100 / 50, (1000 - a) % 100 % 50 / 10);

	return 0;
}