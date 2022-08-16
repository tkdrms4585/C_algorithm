/*
http://220.89.64.243/30stair/mixing_milk/mixing_milk.php?pname=mixing_milk
우유 회사에서 업자별 리터당 가격과 가진 양이 주어질 때 우유를 가장 싸게 구하는 가격
입력
사야 할 우유 양 / 팔고자 하는 업자수
리터당 가격 / 업자가 가진 우유 양
*/

#include<stdio.h>
#include<algorithm>
using namespace std;

struct temp {
	int p, a; // 리터당 가격 / 업자 보유량
}km[5050], tm;

int chkmilk(temp i, temp j) {
	return i.p < j.p;
}

int main() {
	int i, n, m, answer = 0;

	// 입력
	scanf("%d %d", &n, &m); // n=사야할 우유양 / m=업자 수
	for (i = 0; i < n; i++) {
		scanf("%d %d", &km[i].p, &km[i].a); // 리터당 가격 / 업자 보유량
	}

	// 정렬
	sort(km, km + n, chkmilk);

	// 계산
	while(1) {
		if (n >  km[i].a) {
			answer += km[i].p * km[i].a;
			n -= km[i].a;
		}
		else {
			answer += km[i].p * n;
			break;
		}
	}

	// 출력
	printf("%d", answer);

	return 0;
}