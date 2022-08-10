/*
http://220.89.64.243/30stair/icpc/icpc.php?pname=icpc
편파 심판의 판정을 없에기 위해
참가자가 받은 점수의 최소값, 최대값 각 1개를 빼고 평균을 계산

n명의 심판과
각 심판의 점수를 입력
*/

#include<stdio.h>
#include<algorithm> // sort에 필요한 헤드 파일
using namespace std; // 정렬에 사용할 공간

int chkicpc(int i, int j) {
	return (i < j);
}

int main_icpc() {
	int a[100];
	int i, n, avg = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	sort(a, a + n, chkicpc); // 정렬할 변수명, 길이, 조건
	
	// 평균 계산
	for (i = 1; i < n - 1; i++) {
		avg += a[i];
	}
	avg /= n - 2; // 입력 받은 n에서 최소, 최대값을 빼서 -2

	// 출력
	printf("%d", avg);

	return 0;
}