/*
http://220.89.64.243/30stair/mt/mt.php?pname=mt
n�� �Է¹޾� 1���� n���� ����� �����ϸ� 1���� �ٽ� ���
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