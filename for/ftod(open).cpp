/*
http://220.89.64.243/30stair/ftod/ftod.php?pname=ftod
0과 1사이의 분수가 입력으로 주어질때 소수 이하 k자리 까지 출력하는 문제
*/

#include<stdio.h>

int main_ftod() {
	int i, a, b, c;
	// 입력
	scanf("%d %d %d", &a, &b, &c);
	printf("0."); // 0과 1사이의 분수

	// c의 값이 0이 되면 루프 종료
	// 일반적으로 나눗셈을 하는 방식을 생각하면 된다.
	// 더이상 나누지 못할때 10을 곱한뒤 나눗셈 진행
	while (c--) { 
		a *= 10; 
		printf("%d", a / b);
		a %= b;
	}
	
	return 0;
}