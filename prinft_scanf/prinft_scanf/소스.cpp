/*
http://220.89.64.243/30stair/koi_watch/koi_watch.php?pname=koi_watch
���� �ð����� �Է� ���� �� ��ŭ�� �ð��� ������ ���� �ð� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t, m, s, d;
	scanf("%d %d %d", &t, &m, &s);
	scanf("%d", &d);
	t += d / (60 * 60);
	// 24�ð� ������

	m += d % (60 * 60) / 60;

	s += d % (60 * 60) % 60;

	printf("%d %d %d", t, m, s);
	return 0;
}