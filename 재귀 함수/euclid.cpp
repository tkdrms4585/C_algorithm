/*
http://220.89.64.243/30stair/euclid/euclid.php?pname=euclid
�μ��� �Է� �޾� �ִ� �����, �ּ� ������� ���ϴ� ���α׷� �ۼ�
*/
#include<stdio.h>

int gcd(int a, int b) {
	int t;
	a %= b;
	if (b == 0) return a;
	t = a; a = b; b = t;
	gcd(a, b);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	gcd(a, b);

	return 0;
}