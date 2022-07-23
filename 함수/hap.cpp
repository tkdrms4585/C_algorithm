/*
http://220.89.64.243/30stair/hap/hap.php?pname=hap
네 수를 입력받아 합을 구하는 프로그램 작성 ( 함수 사용 )
*/
#include<stdio.h>

int hap(int a, int b) {

	return a + b;
}

int main_hap() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	printf("%d", (hap(hap(a, b), hap(c, d))));
	return 0;
}