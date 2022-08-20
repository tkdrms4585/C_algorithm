/*

*/

#include<stdio.h>

int main() {
	int stair[310] = { 0, };
	int con[310] = { 0, }; // 연속으로 계단을 밟는 경우
	int jump[310] = { 0, }; // 건너 뛰어 계단을 밟는 경우
	int i, j, n;

	scanf("%d", &n);
	for (i = 2; i <= n + 1; i++) { // 배열의 초기값이 0,0 으로 하기위해
		scanf("%d", &stair[i]);
	}

	for (i = 2; i <= n + 1; i++) {
		// 연속으로 계단을 밝기 위해서는 앞의 경우에서 
		jump[i] += jump[i-2] > con[i-2] ? jump[i - 2] + stair[i] : con[i - 2] + stair[i];
		// 연속으로 계단을 밟는 경우 >> 앞의 경우에서 점프를 해야함
		con[i] = jump[i - 1] + stair[i];
	}

	printf("%d", con[n+1] > jump[n+1] ? con[n + 1] : jump[n + 1]);
	return 0;
}