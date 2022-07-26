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
	

	while (1) {
		m = n; // 이전에 입력 받은 값 대입
		scanf("%lf", &n); // 새로운 값 대입
		if (n == 999) break; // 입력받은 값이 999면 루프 종료
		printf("%.2lf\n", n - m); // 새로운 값 - 이전 값
	}
	printf("End of Output");

	return 0;
}