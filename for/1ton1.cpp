/*
http://220.89.64.243/30stair/1ton1/1ton1.php?pname=1ton1
n을 입력 받아 예시와 같이 출력
예)
1+2+3+4+5=15
*/

#include<stdio.h>

int main_1ton1() {
	int i, n, s = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		s += i;
		if (i != n)
			printf("%d+", i);
		else
			printf("%d=", i);
	}
	printf("%d", s);
	return 0;
}