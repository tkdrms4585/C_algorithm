/*
http://220.89.64.243/30stair/above_average/above_average.php?pname=above_average
��з� = ������ʰ��λ���� / ��ü�ο��� * 100
�� �ο���, ������ �־�����
��� �ʰ��� ����� ��з��� �Ҽ� 3 �ڸ� ���� ���
*/

#include<stdio.h>

int main_above_average() {
	int i, n, a[1010], s = 0;
	double avg = 0;
	// �Է�
	scanf("%d", &n); // �ο� ��
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]); // ����
		avg += a[i]; // ����� ���ϱ� ���� �հ�
	}
	avg /= n; // ���
	// ��� �ʰ��� ��� ��
	for (i = 0; i < n; i++) {
		if (a[i] > avg)
			s++;
	}
	// s�� double ������ ����ȯ�� ������ ������
	// s / n = 0�� �ȴ�.
	// %�� ����ϱ� ���ؼ��� %�� �������� ��� ( %% )
	printf("%.3lf%%", (double)s / n * 100); 

	return 0;
}