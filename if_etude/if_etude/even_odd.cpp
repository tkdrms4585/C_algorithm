/*
http://220.89.64.243/30stair/even_odd/even_odd.php?pname=even_odd
1000이하 자연수 입력
출력 예의 형태로 출력
odd+even=odd
odd*even=even
*/

#include<stdio.h>

int main_even_odd() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a % 2 != 0)
		printf("odd+");
	else
		printf("even+");
	
	if (b % 2 != 0)
		printf("odd=");
	else
		printf("even=");

	if ((a + b) % 2 != 0)
		printf("odd\n");
	else
		printf("even\n");
	
	// 곱셈 부분 출력
	if (a % 2 != 0)
		printf("odd*");
	else
		printf("even*");

	if (b % 2 != 0)
		printf("odd=");
	else
		printf("even=");

	if ((a * b) % 2 != 0)
		printf("odd\n");
	else
		printf("even");

	return 0;
}