/*
http://220.89.64.243/30stair/comparefrac/comparefrac.php?pname=comparefrac
a,b,c,d 를 입력 받아
a/b 와 c/d 를 비교하여
>
<
= 
를 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일
int main_comparefrac() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((double)a/b > (double)c/d)
		printf("1");
	else if ((double)a/b < (double)c/d)
		printf("-1");
	else
		printf("0");
	return 0;
}