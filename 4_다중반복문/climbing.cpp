/*
http://220.89.64.243/30stair/climbing/climbing.php?pname=climbing
n = �칰 ����
u = ������ �д� ������ ����
d = ���� ���� �̲������� ����
������ �칰�� ���������� �ð��� ���Ͽ���
n �� 0 �̸� �Է��� ��
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