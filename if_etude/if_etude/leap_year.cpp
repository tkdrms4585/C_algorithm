/*
http://220.89.64.243/30stair/leap_year/leap_year.php?pname=leap_year
자연수를 입력 받아
윤년이면 YES
아니면 NO
*/

#include<stdio.h>

int main_leap() {
	int y;
	scanf("%d", &y);

	if (y % 4 == 0 && y % 100 || y % 400 == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}