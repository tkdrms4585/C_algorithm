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
int main_coci() {
	int a, b, c, d, e, f, g, h;
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	if (a < b && b < c && c < d && d < e && e < f && f < g && g < h)
		printf("ascending");
	else if (a > b && b > c && c > d && d > e && e > f && f > g && g > h)
		printf("descending");
	else
		printf("mixed");
		
	return 0;
}