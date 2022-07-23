/*
http://220.89.64.243/30stair/mgcd/mgcd.php?pname=mgcd
여러 수를 입력 받아 최대 공약수를 출력
*/

#include<stdio.h>
int a[1010];
int gcd(int v, int w) {
	int t;
	while (1) {
		v %= w;
		if (v == 0) return w;
		t = v; v = w; w = t;
	}
}

int main_mgcd() {
	int i, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (i >=1) {
			a[0] = gcd(a[0], a[i]);
		}
	}

	printf("%d", a[0]);

	return 0;
}