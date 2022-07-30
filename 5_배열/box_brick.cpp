/*
http://220.89.64.243/30stair/box_brick/box_brick.php?pname=box_brick
벽돌 무더기 수가 주어지고
각 무더기 마다의 높이가 주어진다.
각 무더기 마다의 높이를 똑같이 맞추려 할 때 벽돌을 움직일
최소의 수를 아래의 출력 예시 형태로 출력

The minimum number of moves is k.
*/

#include<stdio.h>

int main_box_brick() {
	int i, avg = 0, sum = 0, n, a[50];
	
	// 입력 및 전체 수 파악
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		avg += a[i];
	}
	// 평균 구하기
	avg /= n;
	// 평균 이상 - 평균 = 이동할 블럭 수
	for (i = 0; i < n; i++) {
		if (a[i] > avg)
			sum += a[i] - avg;
	}
	printf("The minimum number of moves is %d.", sum);

	return 0;
}