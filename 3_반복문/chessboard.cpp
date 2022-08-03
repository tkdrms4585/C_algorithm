/*
http://220.89.64.243/30stair/chessboard/chessboard.php?pname=chessboard
개미는 (1,1)에서 시작하여 1초마다 뱀 모양이로 이동할 때
n초 후 개미의 위치
*/

#include<stdio.h>

int main_chessboard() {
	int i, n, cnt = 1, x = 1, y = 1, t = 1;
	// 입력
	scanf("%d", &n);
	// y증가 x증가 y 감소
	// x증가 y증가 x 감소 루틴
	// 1번째 증가 >> 1
	// 2번째 증가 >> cnt 만큼
	// 3번째 감소 >> cnt 만큼
	while (1) {
		if (n == t) break;
		y++, t++;
		for (i = 0; i < cnt; i++) {
			if (n == t) break;
			x++, t++;
		}
		for (i = 0; i < cnt; i++) {
			if (n == t) break;
			y--, t++;
		}
		cnt++;

		if (n == t) break;
		x++, t++;
		for (i = 0; i < cnt; i++) {
			if (n == t) break;
			y++, t++;
		}
		for (i = 0; i < cnt; i++) {
			if (n == t) break;
			x--, t++;
		}
		cnt++;
	}
	printf("%d %d", x, y);

	return 0;
}