/*
http://220.89.64.243/30stair/even_odd/even_odd.php?pname=even_odd
1000���� �ڿ��� �Է�
��� ���� ���·� ���
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
	
	// ���� �κ� ���
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