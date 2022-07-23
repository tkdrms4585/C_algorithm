/*
http://220.89.64.243/30stair/max/max.php?pname=max
7개의 수를 입력 받아 그 최대값을 출력
*/

#include<stdio.h>

int main_max() {
	int i, n, d = 0;

	for (i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n > d)
			d = n;
	}

	printf("%d", d);
	return 0;
}