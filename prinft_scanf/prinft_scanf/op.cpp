/*
* http://220.89.64.243/30stair/op/op.php?pname=op
* �⺻ ����
* �� �ڿ����� �Է� �޾�
* ��, ��, ��, ��, �������� ���ϴ� ���α׷� �ۼ�
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d+%d=%d\n", a, b, a+b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%d\n", a, b, a / b);
	printf("%d%%%d=%d\n", a, b, a % b);

	return 0;
}