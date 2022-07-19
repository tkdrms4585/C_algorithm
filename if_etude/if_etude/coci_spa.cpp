/*
http://220.89.64.243/30stair/coci_spa/coci_spa.php?pname=coci_spa
문제에 주어진 시각에서 45분 전의 시간을 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //헤드파일

int main_coci_spa() {
	int m, s;
	scanf("%d %d", &m, &s);
	
	s -= 45;
	if (s < 0) {
		s += 60;
		m--;
	}

	printf("%d %d", m, s);
	return 0;
}