/*
http://220.89.64.243/30stair/tencard/tencard.php?pname=tencard
십자 카드 네 모서리에 1이상 9이하의 숫자가 쓰여있다.
시계수는 카드의 숫자들을 시계방향에서 읽은 네자리수 중에 가장 작은 것.
해당 시계수가 전체 시계 수 중에 몇번째 인지 구하는 프로그램 작성.
*/

#include<stdio.h>

int chk[100000], dab;
int rchk(int a, int b, int c, int d) {
	return a * 1000 + b * 100 + c * 10 + d;
}

int rotate(int a, int b, int c, int d) {
	int min = 0;
	min = (min > rchk(a, b, c, d) ? min : rchk(a, b, c, d));
	min = (min > rchk(b, c, d, a) ? min : rchk(b, c, d, a));
	min = (min > rchk(c, d, a, b) ? min : rchk(c, d, a, b));
	min = (min > rchk(d, a, b, c) ? min : rchk(d, a, b, c));
	return min;
}

int main() {
	int n, m, t, i1, i2, i3, i4, a, b, c, d;

	for (i1 = 1; i1 <= 9; i1++) {
		for (i2 = 1; i2 <= 9; i2++) {
			for (i3 = 1; i3 <= 9; i3++) {
				for (i4 = 1; i4 <= 9; i4++) {

				}
			}
		}
	}
	return 0;
}