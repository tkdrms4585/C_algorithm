/*
http://220.89.64.243/30stair/ATM/ATM.php?pname=ATM
ATM���� ������ ������ 0.5 $�� �����Ḧ �����Ѵ�
���� ������ �ݾ��� 5�� ����� ����
�ŷ��� ���¿� ���� �ݾ� ���
�Է�
���� �ݾ�, ���� ������ �ݾ�
*/

#include<stdio.h>

int main_atm() {
	int x;
	double y;
	scanf("%d %lf", &x, &y);
	
	if (x % 5 == 0 && x+0.5 <= y) {
		y -= x + 0.5;
		printf("%.2lf", y);
	}
	else
		printf("%.2lf", y);
	return 0;
}