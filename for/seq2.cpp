/*
http://220.89.64.243/30stair/seq2/seq2.php?pname=seq2
N�� �Է� �޾� �Ʒ��� ���÷� ���
�Է�
5
���
1..1 1
1..2 3
1..3 6
1..4 10
1..5 15
*/

#include<stdio.h>

int main_seq2() {
	int i, n, s = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		s += i;
		printf("1..%d %d\n", i, s);
	}
	return 0;
}