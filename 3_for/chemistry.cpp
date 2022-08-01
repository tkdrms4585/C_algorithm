/*
http://220.89.64.243/30stair/chemistry/chemistry.php?pname=chemistry
매 분당 온도를 적어 놓았다
현재 온도와 바로 전 온도를 뺀 값을 출력
999를 입력 받으면 "End of Output"을 출력 후 종료
*/

#include<stdio.h>

int main_chemistry() {
	double n, m;
	scanf("%lf", &n);
	// 입력

	while (1) {
		m = n;
		scanf("%lf", &n);
		if (n == 999) break;
		printf("%.2lf\n", n - m);
	}
	printf("End of Output");

	return 0;
}