/*
http://220.89.64.243/30stair/printe/printe.php?pname=printe
Ȧ���� �Է� �޾� E ��� ���
�Է� 5
*****
*
*****
*
*****
*/

#include<stdio.h>

int main_e() {
	int i, j, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == 0 || i == n / 2)
				printf("*");
		
		}
		printf("\n");
	}

	return 0;
}