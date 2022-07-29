/*
http://220.89.64.243/30stair/bui/bui.php?pname=bui
v 모양 출력
입력 받은 n은 아래와 같이 쓰임
 **< n>**
*  *  *  *
 *  **  *
  *    *
   *  *
	**
*/

#include<stdio.h>

int main_bui() {
	int i, j, n, p1, p2, p3, p4;
	scanf("%d", &n);
	p1 = 0;
	p2 = 3;
	p3 = n + 2;
	p4 = n + 5;
	printf(" **");
	for (i = 0; i < n; i++)
		printf(" ");
	printf("**\n");
	for (i = 0;; i++) {
		for (j = 0; j < n + 6; j++) {
			if (j == p1 || j == p2 || j == p3 || j == p4)
				printf("*");
			else
				printf(" ");
		}
		if (p2 == p3 || p2 == p3 - 1)
			p2 = 999, p3 = 999;
		if (p1 == p4 || p1 == p4 - 1)
			break;
		else
			p1++, p2++, p3--, p4--;
		printf("\n");
	}
	A:
	return 0;
}