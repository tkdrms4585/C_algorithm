/*
http://220.89.64.243/30stair/big_clock/big_clock.php?pname=big_clock
�ð��� �־��� �� ������ ���� �︮�� Ƚ���� ���
13�� 1ȸ, 14�� 2ȸ, ... 12�� 24ȸ,
*/

#include<stdio.h>

int main_big_clock() {
	int a[24] = { 12, 13,14,15,16,17,18,19,20,21,22,23,24, 1,2,3,4,5,6,7,8,9,10,11 };
	int t, m;
	scanf("%d : %d", &t, &m);

	if (m != 0)
		printf("0");
	else
		printf("%d", a[t]);
	return 0;
}