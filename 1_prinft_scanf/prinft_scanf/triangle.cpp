/*
http://220.89.64.243/30stair/triangle/triangle.php?pname=triangle
�ﰢ���� ���̸� ���ϴ� ����
�ﰢ���� �غ��� ���̸� �Է� �޴´�
���� = �غ� * ���� / 2
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_triangle() {
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%.2lf", (double)a * b / 2);
	return 0;
}