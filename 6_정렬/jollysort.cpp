/*
http://220.89.64.243/30stair/jolly_sort/jolly_sort.php?pname=jolly_sort
jolly sort란 오름, 내림이 반복되는상태의 정렬
첫 두수는 오름차순이며 그뒤로 내림, 오름, 반복
여러 답이 존재하는 경우 그 중 하나만 출력
*/

#include<stdio.h>
#include<algorithm>
using namespace std;

int jolly(int i, int j) {
	return i < j;
}

int main_jolly() {
	int a[20];
	int i, n, sw = 0;
	int s, e;

	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	// 정렬
	sort(a, a + n, jolly);

	// 출력
	// 정렬 된 수를 앞뒤로 출력
	s = 0, e = n - 1;
	for (i = 0; i < n; i++) {
		if (sw == 0) {
			printf("%d ", a[s++]);
			sw = 1;
		}
		else {
			printf("%d ", a[e--]);
			sw = 0;
		}
	}

	return 0;
}