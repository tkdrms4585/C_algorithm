/*
http://220.89.64.243/30stair/tw/tw.php?pname=tw
입력과 반대 방향으로 레이저 송신
이전 문제의 반대 개념
몇번 송신탑이 수신받는지 출력

ex) 5
6 9 5 7 4
<< 방향으로 레이저 송신

6 젤 앞이라 0
9 앞에 있는게 나보다 작아서 0
5 높이9(2번 송신탑)이 수신 2
7 높이9(2번 송신탑)이 수신 2
4 높이7(4번 송신탑)이 수신 4
0 0 2 2 4
*/

#include<stdio.h>
#define M 500001

int main_tw() {
	int s[M][2] = { 0, }, dab[M] = { 0, }, a[M] = { 0, };
	int n, i, j, k = -1;

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = n; i >= 1; i--) {
		if (k == -1 || s[k][0] > a[i]) {
			s[++k][0] = a[i];
			s[k][1] = i;
		}
		else {
			for (k; k >= 0 && s[k][0] <= a[i]; --k) {
				dab[s[k][1]] = i;
			}
			s[++k][0] = a[i];
			s[k][1] = i;
		}
	}
	for (i = 1; i <= n; i++)
		printf("%d ", dab[i]);


	return 0;
}