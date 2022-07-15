/*
* http://220.89.64.243/30stair/op/op.php?pname=op
* 기본 연산
* 두 자연수를 입력 받아
* 합, 차, 곱, 몫, 나머지를 구하는 프로그램 작성
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