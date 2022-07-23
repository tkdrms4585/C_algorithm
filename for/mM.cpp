/*
http://220.89.64.243/30stair/mM/mM.php?pname=mM
7개의 수를 입력 받아 그중 최소, 최대값을 출력
*/

#include<stdio.h>

int main_mM() {
	int i, n,  max = 0, min = 999;

	for (i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n < min)
			min = n;
		if (n > max)
			max = n;
	}

	printf("%d %d", max, min);
	return 0;
}