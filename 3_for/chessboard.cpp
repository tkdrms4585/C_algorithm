/*
http://220.89.64.243/30stair/chessboard/chessboard.php?pname=chessboard
���̴� (1,1)���� �����Ͽ� 1�ʸ��� �� ����̷� �̵��� ��
n�� �� ������ ��ġ
*/

#include<stdio.h>

int main_chessboard() {
	int i, n, cnt = 1, x = 1, y = 1, t = 1;
	// �Է�
	scanf("%d", &n);
	// y���� x���� y ����
	// x���� y���� x ���� ��ƾ
	// 1��° ���� >> 1
	// 2��° ���� >> cnt ��ŭ
	// 3��° ���� >> cnt ��ŭ
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