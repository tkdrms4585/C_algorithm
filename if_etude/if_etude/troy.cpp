/*
http://220.89.64.243/30stair/troy/troy.php?pname=troy
�񸶸� ����µ� �ʿ��� ���� ���� 1000�� �̴�.

n���� �񸶿� m���� ������� �Է� �Ǿ��� ��
n���� �񸶸� ����� �ִ��� ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //�������

int main_troy() {
	int n, m;

	scanf("%d %d", &n, &m);

	if (n * 1000 <= m)
		printf("O");
	else
		printf("X");
	return 0;
}