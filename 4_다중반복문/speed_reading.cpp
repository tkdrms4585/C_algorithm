/*
http://220.89.64.243/30stair/speed_reading/speed_reading.php?pname=speed_reading
å�� �������� n, �������� �� k
�� �����ڴ�
s = �д� �д� ������
t = �ѹ��� �����ϴ� �ð�
r = ������ ���� �� ���� �ð�
�� �־�����.
å�� �� �дµ� �ʿ��� �ð��� ���Ͽ���.
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