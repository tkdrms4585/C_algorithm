/*
http://220.89.64.243/30stair/saju/saju.php?pname=saju
���� �� ���� �Է¹޾�
���� + �� + �� �� ������ ���ڰ� 0�Ƹ� '�������!'
�׷��� �ʴٸ� '����ϼ���!' ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //�������

int main_saju() {
	int y, m, d;
	scanf("%d %d %d", &y, &m, &d);

	y += m + d;

	if (y % 10 == 0)
		printf("�������!");
	else
		printf("����ϼ���!");

	return 0;
}