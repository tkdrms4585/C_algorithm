/*
http://220.89.64.243/30stair/tri4/tri4.php?pname=tri4
n을 입력 받아 z 모양 출력
입력 5
*****
...*
..*
.*
*****
*/

#include<stdio.h>

int main_zorro() {
	int i, j, n;
	scanf("%d", &n);

	for (i = n; i > 0; i--) {
		for (j = n; j > 0; j--) {
			if (i == 1 || i == n || j == n - i + 1)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}

	return 0;
}