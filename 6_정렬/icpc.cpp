/*
http://220.89.64.243/30stair/icpc/icpc.php?pname=icpc
���� ������ ������ ������ ����
�����ڰ� ���� ������ �ּҰ�, �ִ밪 �� 1���� ���� ����� ���

n���� ���ǰ�
�� ������ ������ �Է�
*/

#include<stdio.h>
#include<algorithm> // sort�� �ʿ��� ��� ����
using namespace std; // ���Ŀ� ����� ����

int chkicpc(int i, int j) {
	return (i < j);
}

int main_icpc() {
	int a[100];
	int i, n, avg = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	sort(a, a + n, chkicpc); // ������ ������, ����, ����
	
	// ��� ���
	for (i = 1; i < n - 1; i++) {
		avg += a[i];
	}
	avg /= n - 2; // �Է� ���� n���� �ּ�, �ִ밪�� ���� -2

	// ���
	printf("%d", avg);

	return 0;
}