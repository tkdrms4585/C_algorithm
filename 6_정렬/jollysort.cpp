/*
http://220.89.64.243/30stair/jolly_sort/jolly_sort.php?pname=jolly_sort
jolly sort�� ����, ������ �ݺ��Ǵ»����� ����
ù �μ��� ���������̸� �׵ڷ� ����, ����, �ݺ�
���� ���� �����ϴ� ��� �� �� �ϳ��� ���
*/

#include<stdio.h>
#include<algorithm>
using namespace std;

int jolly(int i, int j) {
	return i < j;
}

int main_jolly() {
	int a[20];
	int i, n, sw = 0;
	int s, e;

	// �Է�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// ����
	sort(a, a + n, jolly);

	// ���
	// ���� �� ���� �յڷ� ���
	s = 0, e = n - 1;
	for (i = 0; i < n; i++) {
		if (sw == 0) {
			printf("%d ", a[s++]);
			sw = 1;
		}
		else {
			printf("%d ", a[e--]);
			sw = 0;
		}
	}

	return 0;
}