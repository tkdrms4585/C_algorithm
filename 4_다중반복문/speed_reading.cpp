/*
http://220.89.64.243/30stair/speed_reading/speed_reading.php?pname=speed_reading
책의 페이지수 n, 참가자의 수 k
각 참가자는
s = 분당 읽는 페이지
t = 한번에 집중하는 시간
r = 집중이 끝난 뒤 쉬는 시간
이 주어진다.
책을 다 읽는데 필요한 시간을 구하여라.
*/

#include<stdio.h>

int main_speed_reading() {
	int i, j, n, k, s, t, r, read = 0, answer = 0;
	scanf("%d %d", &n, &k);

	while(k--) {
		scanf("%d %d %d", &s, &t, &r);
		read = 0, answer = 0;
		while (read < n) {
			for (j = 0; j < t; j++) {
				read += s;
				answer++;
				if (read >= n) break;
			}
			if (read < n) answer += r;
		}
		printf("%d\n", answer);
	}

	return 0;
}