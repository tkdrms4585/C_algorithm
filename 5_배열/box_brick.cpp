/*
http://220.89.64.243/30stair/box_brick/box_brick.php?pname=box_brick
���� ������ ���� �־�����
�� ������ ������ ���̰� �־�����.
�� ������ ������ ���̸� �Ȱ��� ���߷� �� �� ������ ������
�ּ��� ���� �Ʒ��� ��� ���� ���·� ���

The minimum number of moves is k.
*/

#include<stdio.h>

int main_box_brick() {
	int i, avg = 0, sum = 0, n, a[50];
	
	// �Է� �� ��ü �� �ľ�
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		avg += a[i];
	}
	// ��� ���ϱ�
	avg /= n;
	// ��� �̻� - ��� = �̵��� �� ��
	for (i = 0; i < n; i++) {
		if (a[i] > avg)
			sum += a[i] - avg;
	}
	printf("The minimum number of moves is %d.", sum);

	return 0;
}