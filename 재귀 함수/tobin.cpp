/*
http://220.89.64.243/30stair/tobin/tobin.php?pname=tobin
10������ �Է¹޾� �������� ����
*/

#include <stdio.h>

void bin(int n) {
	if (n == 0) return;
	bin(n/2);
	printf("%d", n%2);
}
int main_tobin() {
	int n;
	scanf("%d", &n);
	bin(n);

	return 0;
}