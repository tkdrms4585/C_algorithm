/*
http://220.89.64.243/30stair/rep/rep.php?pname=rep
1부턴 n까지 연속 출력 사이에는 공백으로 구분
*/

#include<stdio.h>

int main_rep() {
	int i, n;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%d ", i);

	return 0;
}