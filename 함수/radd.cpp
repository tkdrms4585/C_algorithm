/*
http://220.89.64.243/30stair/radd/radd.php?pname=radd
�� ���� �Է¹޾�
����������� 
���� ����� ����� ���
��)
�Է� 
12 345
21 + 543 = 564
���
465
*/

#include<stdio.h>

int rev(int a) {	// ���ڸ� ������ �Լ�
	int b = 0;
	while (1) {
		b = b * 10 + a % 10;
		a /= 10;
		if (a == 0) break;
	}
	return b;
}

int main_radd() {
	int a, b, s;
	scanf("%d %d", &a, &b);
	
	a = rev(a);		// a ������
	b = rev(b);	// b ������

	s = a + b;		// ���� ��
	s = rev(s);	// ���� �� ������

	printf("%d", s);

	return 0;
}