/*
http://220.89.64.243/30stair/adigit/adigit.php?pname=adigit
999 ������ 7���� ���� �Է� �޾�
���ڸ�, ���ڸ�, ���ڸ� ������ ���� �� �� ���
*/

#include<stdio.h>

int main_adigit() {
	int i, n, a = 0, b = 0, c = 0;
	for (i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n < 10)
			a += n;
		else if (n < 100)
			b += n;
		else
			c += n;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}