/*
http://220.89.64.243/30stair/tri2/tri2.php?pname=tri2
�� ���� �ﰢ�� ���
�Է� 5
*****
****
***
**
*
*/

#include<stdio.h>

int main_tri2() {
	int i, j, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = n; j > i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}