/* 
* http://220.89.64.243/30stair/m2s/m2s.php?pname=m2s
* m2s
* 분을 입력 받아 초로 변환
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_m2s() {
	int m;
	scanf("%d", &m);
	printf("%d minutes is %d seconds.", m, 60 * m);
	return 0;
}

