#include<stdio.h>

int main_ds() {
	int num[500001];
	int i, j, n, seek, cnt = 0;
	int low, high, mid;
	scanf("%d", &n); // 자료 수
	for (i = 1; i <= n; i++)
		scanf("%d", &num[i]); // 자료 입력
	scanf("%d", &seek); // 찾을 수

	low = 1, high = n;
	while (low <= high) {
		cnt++; // 순회 횟수
		mid = (low + high) / 2;
		if (num[mid] > seek) // 중간 값이 찾는 값보다 큰 경우
			high = mid - 1;
		else if (num[mid] < seek) // 중간 값이 찾는 값보다 작은 경우
			low = mid + 1;
		else {
			printf("%d", cnt); // 자료를 찾으면 리턴
			return 0;
		}
	}
	printf("not found"); // 자료를 못 찾을 경우


	return 0;
}