/*
http://220.89.64.243/30stair/Nsum/Nsum.php?pname=Nsum
1~n������ ���� m�� �ȴ�.
m�� �־����� n�� ���Ͽ���.
*/

#include<stdio.h>

int main_Nsum() {
	int m, n = 0;
	scanf("%d", &m);
	while (m != 0) {
		m -= ++n;
	}
	printf("%d", n);

	return 0;
}