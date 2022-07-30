/*
http://220.89.64.243/30stair/big_clock/big_clock.php?pname=big_clock
시간이 주어질 때 성당의 종이 울리는 횟수를 출력
13시 1회, 14시 2회, ... 12시 24회,
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