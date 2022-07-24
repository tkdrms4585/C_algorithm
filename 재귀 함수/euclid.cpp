/*
http://220.89.64.243/30stair/euclid/euclid.php?pname=euclid
두수를 입력 받아 최대 공약수, 최소 공배수를 구하는 프로그램 작성
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