/*
http://220.89.64.243/30stair/troy/troy.php?pname=troy
목마를 만드는데 필요한 목재 수는 1000개 이다.

n개의 목마와 m개의 목재수가 입력 되었을 때
n개의 목마를 만들수 있는지 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일

int main_troy() {
	int n, m;

	scanf("%d %d", &n, &m);

	if (n * 1000 <= m)
		printf("O");
	else
		printf("X");
	return 0;
}