/*
http://220.89.64.243/30stair/swimming/swimming.php?pname=swimming
1~7 ���ڴ� ���� ��~�Ͽ��Ͽ� �ش�
��, ��, �� ���� ������ �Ϸ� ���� ������ ���� ������ üũ
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //�������

int main_swim() {
	int a;
	scanf("%d", &a);
	if (a == 1 || a == 3 || a == 5)
		printf("enjoy");
	else
		printf("oops");
	return 0;
}