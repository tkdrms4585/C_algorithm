/*
http://220.89.64.243/30stair/div_mul/div_mul.php?pname=div_mul
�μ� m, n�� ���ʷ� �־�����
m�� n�� ����̸� m | n
�ƴϸ� m !| n ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //�������

int main_div_mul() {
	int m, n;

	scanf("%d %d", &m, &n);

	if (m == 0 || n%m != 0)
		printf("%d !| %d", m, n);
	else
		printf("%d | %d", m, n);

	return 0;
}