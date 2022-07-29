/*
http://220.89.64.243/30stair/climbing/climbing.php?pname=climbing
n = 우물 깊이
u = 벌레가 분당 오르는 높이
d = 쉬는 동안 미끄러지는 높이
벌레가 우물을 빠져나오는 시간을 구하여라
n 이 0 이면 입력의 끝
*/

#include<stdio.h>

int main_climbing() {
	int n = 1, u, d, e = 0, t = 0;
	while (1) {
		scanf("%d %d %d", &n, &u, &d);
		if (n == 0) break;
		while (n >= e) {
			e += u;
			t++;
			if (n <= e)
				break;
			e -= d;
			t++;
		}
		printf("%d\n", t);
		e = 0;
		t = 0;
	}

	return 0;
}