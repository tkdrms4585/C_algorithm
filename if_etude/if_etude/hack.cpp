/*
http://220.89.64.243/30stair/hack/hack.php?pname=hack
ȫ���� ���� ���� ��� ����
ȫ���� �� ��� ����
ȫ�� ���
�� �Է¹ް�
������ ��Ȳ�� ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //�������

int main_hack() {
	int r, e, c;
	scanf("%d %d %d", &r, &e, &c);

	if (r < e - c)
		printf("advertise");
	else if (r > e - c)
		printf("do not advertise");
	else
		printf("does not matter");

	return 0;
}