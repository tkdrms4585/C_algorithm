/*
http://220.89.64.243/30stair/adigit/adigit.php?pname=adigit
999 이하의 7개의 수를 입력 받아
한자리, 두자리, 세자리 수끼리 덧셈 및 합 출력
*/

#include<stdio.h>

int main_adigit() {
	int i, n, a = 0, b = 0, c = 0;
	for (i = 0; i < 7; i++) {
		scanf("%d", &n);
		if (n < 10)
			a += n;
		else if (n < 100)
			b += n;
		else
			c += n;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}