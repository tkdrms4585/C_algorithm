/*
http://220.89.64.243/30stair/seq/seq.php?pname=seq
�� �ڿ����� �Է� �ް� �� ���� ���� ������� ���
*/

#include<stdio.h>

int main_seq() {
	int i, a, b, t=0;
	scanf("%d %d", &a, &b);
	
	if (b < a) {
		t = a;
		a = b;
		b = t;
	}
		
	for (i = a; i <= b; i++)
		printf("%d ", i);

	return 0;
}