/*
http://220.89.64.243/30stair/54321/54321.php?pname=54321
n을 입력 받고 아래와 같이 출력
입력 5
54321
4321
321
21
1
*/

#include<stdio.h>

int main_54321() {
	int i, j, n;
	scanf("%d", &n);

	for (i = n; i > 0; i--) {
		for (j = i; j >0; j--) {
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}