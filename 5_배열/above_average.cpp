/*
http://220.89.64.243/30stair/above_average/above_average.php?pname=above_average
백분률 = 반평균초과인사람수 / 전체인원수 * 100
반 인원수, 점수가 주어질때
평균 초과인 사람의 백분률을 소수 3 자리 까지 출력
*/

#include<stdio.h>

int main_above_average() {
	int i, n, a[1010], s = 0;
	double avg = 0;
	// 입력
	scanf("%d", &n); // 인원 수
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]); // 점수
		avg += a[i]; // 평균을 구하기 위한 합계
	}
	avg /= n; // 평균
	// 평균 초과인 사람 수
	for (i = 0; i < n; i++) {
		if (a[i] > avg)
			s++;
	}
	// s를 double 형으로 형변환을 해주지 않으면
	// s / n = 0이 된다.
	// %를 출력하기 위해서는 %를 연속으로 사용 ( %% )
	printf("%.3lf%%", (double)s / n * 100); 

	return 0;
}