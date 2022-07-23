/*
http://220.89.64.243/30stair/sb/sb.php?pname=sb
7개의 숫자를 입력 받고 가장 높은 수의 순서를 출력
*/

#include<stdio.h>

int main_sb() {
	int i, n, m = 0, d = 0;
	
	for (i = 1; i <= 7; i++) {
		scanf("%d", &n);
		if (n > m) {
			d = i;
			m = n;
		}
	}
	printf("%d", d);
	return 0;
}