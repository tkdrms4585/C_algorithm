/*
http://220.89.64.243/30stair/chemistry/chemistry.php?pname=chemistry
�� �д� �µ��� ���� ���Ҵ�
���� �µ��� �ٷ� �� �µ��� �� ���� ���
999�� �Է� ������ "End of Output"�� ��� �� ����
*/

#include<stdio.h>

int main_chemistry() {
	double n, m;
	scanf("%lf", &n);
	

	while (1) {
		m = n; // ������ �Է� ���� �� ����
		scanf("%lf", &n); // ���ο� �� ����
		if (n == 999) break; // �Է¹��� ���� 999�� ���� ����
		printf("%.2lf\n", n - m); // ���ο� �� - ���� ��
	}
	printf("End of Output");

	return 0;
}