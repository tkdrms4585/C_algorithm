/*
http://220.89.64.243/30stair/insertion/insertion.php?pname=insertion
n개의 데이터를 s번 삽입 정렬한 결과 출력
*/

#include<stdio.h>

int main_insertion() {
	int a[1000];
	int i, j, t, n, s;
	
	// 입력
	scanf("%d %d", & n, &s);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	// 정렬
	for (i = 1; i < s; i++){
		t = a[i];
		for (j = i-1; j >= 0; j--) {
			if (t < a[j])
				a[j + 1] = a[j];
			else
				break;
		}
		a[j + 1] = t;
	}

	// 출력
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	return 0;
}