/*
http://220.89.64.243/30stair/hack/hack.php?pname=hack
홍보를 하지 않을 경우 수입
홍보를 할 경우 수입
홍보 비용
을 입력받고
유리한 상황을 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일

int main_hack() {
	int r, e, c;
	scanf("%d %d %d", &r, &e, &c);

	if (r < e - c)
		printf("advertise");
	else if (r > e - c)
		printf("do not advertise");
	else
		printf("does not matter");

	return 0;
}