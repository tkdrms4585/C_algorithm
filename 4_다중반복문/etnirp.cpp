/*
http://220.89.64.243/30stair/etnirp/etnirp.php?pname=etnirp
Ȧ���� �Է� �޾� �ſ￡ ��ģ E ��� ���
�Է� 5
*****
    *
*****
    *
*****
*/

#include<stdio.h>

int main_etnirp() {
	int i, j, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (i == 0 || i == n - 1 || j == n - 1 || i == n / 2)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}

	return 0;
}