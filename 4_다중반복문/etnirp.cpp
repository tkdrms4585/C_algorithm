/*
http://220.89.64.243/30stair/etnirp/etnirp.php?pname=etnirp
홀수를 입력 받아 거울에 비친 E 모양 출력
입력 5
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