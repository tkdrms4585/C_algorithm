/*
http://220.89.64.243/30stair/penta/penta.php?pname=penta
다각형 모양으로 배열되는 점의 수를 삼각수, 사각수, 오각수, ... 라고 한다.
입력 받은 수가 5각수인지 판별하는 코드
n*(n*3-1)/2

출력은 잘되는데... 정답이라고 뜨지 않는다...

*/

#include<stdio.h>

int main_penta() {
	int i, j, n, num[10000], ck[10000];
	int x = 2, y = 1, cnt = 1; // 5각수 계산을 위한 변수
	int penta;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		while (1) {
			if (num[i] <= cnt * (cnt * 3 - 1) / 2) {
				if (num[i] == cnt * (cnt * 3 - 1) / 2) {
					printf("%d Y\n", num[i]);
					break;
				}
				else {
					printf("%d N\n", num[i]);
					break;
				}
			}
			cnt++;
		}
	}

	return 0;
}