/*
http://220.89.64.243/30stair/bhd/bhd.php?pname=bhd
�Ҵ� �ڱ� �� ���� �Ҹ� �� �� �ִ�.
���� Ű�� �Էµɶ� �������� �����ִ� �� ���
*/

#include<stdio.h>

int main_bhd() {
	int i, j, n, m, s = -1, cnt = 0;
	int a[80080];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		if (s == -1 || a[s] > m)
			a[++s] = m;
		else {
			for (s; s > -1 && a[s] <= m; --s) // ������ ���� �ʰ� ���� ������ �۰ų� ������ �A��.
				cnt += s;
			a[++s] = m; // ���簪�� ���ÿ� �ִ´�.
		}
	}
	cnt += (s * (s + 1) / 2); // ������ ������� ������ �߰� ���
	printf("%lld", cnt);

	return 0;
}