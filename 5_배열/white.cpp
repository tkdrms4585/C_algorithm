/*
http://220.89.64.243/30stair/white/white.php?pname=white
체스 말의 개수를 입력받고
완벽한 세트를 맞추기 위해 필요한 값을 출력
*/

#include<stdio.h>

int main_white() {
	int a[8] = { 1,1,2,2,2,8 };
	int i, n;
	for (i = 0; i < 6; i++) {
		scanf("%d", &n);
		printf("%d ", a[i] - n);
	}
	return 0;
}