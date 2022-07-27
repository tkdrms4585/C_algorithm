/*
http://220.89.64.243/30stair/tri3/tri3.php?pname=tri3
역 직각 삼각형 출력
입력 5
*****
 ****
  ***
   **
	*
*/

#include<stdio.h>

int main_tri3() {
	int i, j, n, cnt = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (cnt > j)
				printf(" ");
			else
				printf("*");
		}
		cnt++;
		printf("\n");
	}

	return 0;
}