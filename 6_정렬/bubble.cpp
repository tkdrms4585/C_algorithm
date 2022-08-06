/*
http://220.89.64.243/30stair/bubble/bubble.php?pname=bubble
n 데이터의 수
s 스탭 수
n개의 데이터를 받아 버블 소트를 s 회 했을 때의 결과 출력
*/

#include<stdio.h>

int main_bubble() {
	int i, j, n, s, t;
	int num[1000];
	// 입력
	scanf("%d %d", &n, &s);
	for (i = 0; i < n; i++)
		scanf("%d", &num[i]);

	// 버블소트 s회
	for (i = 0; i < s; i++) 
		for (j = 0; j < n-i-1; j++) 
			if (num[j] > num[j + 1])
				t = num[j], num[j] = num[j + 1], num[j + 1] = t;

	// 출력
	for (i = 0; i < n; i++)
		printf("%d ", num[i]);

	return 0;
}