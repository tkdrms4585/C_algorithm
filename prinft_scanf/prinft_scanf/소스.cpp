/*
http://220.89.64.243/30stair/koi_watch/koi_watch.php?pname=koi_watch
현재 시간에서 입력 받은 초 만큼의 시간이 지났을 때의 시간 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int t, m, s, d;
	scanf("%d %d %d", &t, &m, &s);
	scanf("%d", &d);
	t += d / (60 * 60);
	// 24시간 오버시

	m += d % (60 * 60) / 60;

	s += d % (60 * 60) % 60;

	printf("%d %d %d", t, m, s);
	return 0;
}