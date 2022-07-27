/*
http://220.89.64.243/30stair/tri1/tri1.php?pname=tri1
직각 삼각형 출력
입력 5
*
**
***
****
*****
*/

#include<stdio.h>

int main_tri1() {
	int i, j, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}