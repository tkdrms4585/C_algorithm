/*
http://220.89.64.243/30stair/eratosthenes/eratosthenes.php?pname=eratosthenes
2 부터 n까지의 소수를 출력
*/

#include<stdio.h>

int main_eratosthenes() {
	int i, j, n;
	int era[10000] = { 0, }; // 소수인지 아닌지 판별할 배열
	// 입력
	scanf("%d", &n);

	// 소수 판별식
	for (i = 2; i * i <= n; i++) {
		if(era[i] == 0)
			for (j = i * 2; j <= n; j += i) 
				era[j] = 1;
	}

	// 출력
	for (i = 2; i < n; i++) {
		if (era[i] == 0)
			printf("%d ", i);
	}

	return 0;
}