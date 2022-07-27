/*
http://220.89.64.243/30stair/empty_bottle/empty_bottle.php?pname=empty_bottle
이벤트를 2번 참여하여 받을 수 있는 음료의 최대값과 남는 병 출력
*/

#include<stdio.h>

int main_eb() {
	int n, a = 0, b = 0;
	scanf("%d", &n);
	
	a += n;
	a += n / 4;
	b += n % 4;
	n = n / 4;
	a += n / 4;
	b += n % 4;

	printf("%d %d", a, b);
	return 0;
}