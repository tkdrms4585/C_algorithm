/*
http://220.89.64.243/30stair/fairy/fairy.php?pname=fairy
2000년 이후 8년 단위로 요정이 발견된다.
요정이 나타나는 해는 O
아니면 X 출력
2000년 이전엔 발견 안됨.
*/

#include<stdio.h>

int main_fairy() {
	int y;
	scanf("%d", &y);
	if (y >= 2000 && y % 8 == 0)
		printf("O");
	else
		printf("X");
	return 0;
}