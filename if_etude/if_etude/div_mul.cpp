/*
http://220.89.64.243/30stair/div_mul/div_mul.php?pname=div_mul
두수 m, n이 차례로 주어질때
m이 n의 약수이면 m | n
아니면 m !| n 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일

int main_div_mul() {
	int m, n;

	scanf("%d %d", &m, &n);

	if (m == 0 || n%m != 0)
		printf("%d !| %d", m, n);
	else
		printf("%d | %d", m, n);

	return 0;
}