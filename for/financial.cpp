/*
http://220.89.64.243/30stair/financial/financial.php?pname=financial
12�������� ������ ��� �ݾ��� ���
*/

#include<stdio.h>

int main_financial() {
	int i;
	double n, sum = 0;
	for (i = 0; i < 12; i++) {
		scanf("%lf", &n);
		sum += n;
	}
	printf("$%.2lf", sum / 12.0);

	return 0;
}