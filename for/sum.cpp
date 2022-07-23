/*
http://220.89.64.243/30stair/sum/sum.php?pname=sum
7개의 수를 입력 받고 이 수의 합을 구하시오.
*/

#include<stdio.h>

int main_sum() {
	int i, a, d = 0;
	for (i = 0; i < 7; i++) {
		scanf("%d", &a);
		d += a;
	}
	printf("%d", d);
		
	return 0;
}