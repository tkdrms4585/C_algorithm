/*
http://220.89.64.243/30stair/hap/hap.php?pname=hap
�� ���� �Է¹޾� ���� ���ϴ� ���α׷� �ۼ� ( �Լ� ��� )
*/
#include<stdio.h>

int hap(int a, int b) {

	return a + b;
}

int main_hap() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("%d", (hap(hap(a, b), hap(c, d))));
	return 0;
}