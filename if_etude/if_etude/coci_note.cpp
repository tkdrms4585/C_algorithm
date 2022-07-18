/*
http://220.89.64.243/30stair/coci_note/coci_note.php?pname=coci_note
1 ~ 8 까지 임의의 수가 입력 될 때
오름차순 ascending
내림차순 descending
섞여있는지 mixed
출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일
int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((double)a / b > (double)c / d)
		printf("1");
	else if ((double)a / b < (double)c / d)
		printf("-1");
	else
		printf("0");
	return 0;
}