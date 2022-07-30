/*
http://220.89.64.243/30stair/dwarf/dwarf.php?pname=dwarf
9명의 난쟁이 중 진짜 7난쟁이를 찾아라
7난쟁이의 키의 합은 100이며
9명의 난쟁이의 키가 주어진다.
*/

#include<stdio.h>

int main_dwarf() {
	int i, j, sum = 0, a[9];
	// 9난쟁이의 키 입력
	for (i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	// 전체 합 - 가짜 2명 == 100
	// 가짜를 0으로 변경
	for (i = 0; i < 9; i++) {
		for (j = i; j < 9; j++) {
			if (sum - a[i] - a[j] == 100 && i != j) {
				a[i] = 0;
				a[j] = 0;
				goto A;
			}
		}
	}
	// 0을 제외한 다른 난쟁이의 키 출력
	A:	
	for (i = 0; i < 9; i++) {
		if (a[i] != 0)
			printf("%d\n", a[i]);
	}

	return 0;
}