/*
http://220.89.64.243/judgeonline/showmessage.php?pname=selection2
n개의 데이터를 s번 선택정렬한 결과 출력
*/

#include<stdio.h>

int main_selection2() {
	int a[1000];
	int i, j, tmp;
	int n, s;
	// 입력
	scanf("%d %d", &n, &s);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	// 정렬
	for (i = 0; i < s; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];	a[i] = a[j]; a[j] = tmp;
			}
		}
	}
	// 출력
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}