/*
http://220.89.64.243/30stair/penta/penta.php?pname=penta
�ٰ��� ������� �迭�Ǵ� ���� ���� �ﰢ��, �簢��, ������, ... ��� �Ѵ�.
�Է� ���� ���� 5�������� �Ǻ��ϴ� �ڵ�
n*(n*3-1)/2

����� �ߵǴµ�... �����̶�� ���� �ʴ´�...

*/

#include<stdio.h>

int main_penta() {
	int i, j, n, num[10000], ck[10000];
	int x = 2, y = 1, cnt = 1; // 5���� ����� ���� ����
	int penta;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		while (1) {
			if (num[i] <= cnt * (cnt * 3 - 1) / 2) {
				if (num[i] == cnt * (cnt * 3 - 1) / 2) {
					printf("%d Y\n", num[i]);
					break;
				}
				else {
					printf("%d N\n", num[i]);
					break;
				}
			}
			cnt++;
		}
	}

	return 0;
}