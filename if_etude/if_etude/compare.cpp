/*
http://220.89.64.243/30stair/compare/compare.php?pname=compare
�� ���� �Է� �޾�
�ռ��� �޼�����
ũ�� >
������ <
������ = ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //�������
int main_compare() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
		printf(">");
	else if (a < b)
		printf("<");
	else
		printf("=");
	return 0;
}