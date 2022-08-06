/*
http://220.89.64.243/30stair/shake/shake.php?pname=shake
버블 정렬을 개선한 정렬 방법
각 스탭에서 2번의 스캔이 일어나 버블 정렬 실행
한번은 앞에서 뒤로 큰 수를 비교
한번은 뒤에서 앞으로 작은 수를 비교
최종 정렬이 일어날 때까지의 스탭 수를 출력
*/

#include<stdio.h>

int main() {
	int i, j, n, t, s = 0;
	int num[1000];
	//입력
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", num[i]);
	
	// 정렬
	while(1) {
		for (j = s; j < n - s - 1; j++) {
			if (num[j] > num[j + 1])
				t = num[j], num[j] = num[j + 1], num[j + 1] = t;
		}
		for (j = n-s-1; j >= s; j--) {
			if (num[j] < num[j +1])
				t = num[j], num[j] = num[j + 1], num[j + 1] = t;
		}
		s++;
		if (j == n / 2 || j == n / 2 - 1)
			break;
	}

	for (i = 0; i < n; i++)
		printf("%d ", num[i]);
	printf("%d", s);

	return 0;
}