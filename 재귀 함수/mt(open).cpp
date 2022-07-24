/*
http://220.89.64.243/30stair/mt/mt.php?pname=mt
n을 입력받아 1부터 n까지 출력후 감소하며 1까지 다시 출력
*/

#include<stdio.h>
int n;
void mt(int v) {
	printf("%d", v);
	if (v == n) return;
	mt(v + 1);
	printf("%d", v);
}

int main_mt() {
	scanf("%d", &n);
	mt(1);
	return 0;
}