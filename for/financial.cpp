/*
http://220.89.64.243/30stair/financial/financial.php?pname=financial
12개월간의 수익의 평균 금액을 출력
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