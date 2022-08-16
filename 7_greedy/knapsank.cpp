/*
http://220.89.64.243/30stair/knapsack/knapsack.php?pname=knapsack
보석의 무게와 값이 주어질때 어떤보석을 가져가야 이득인지 구하는 문제
입력
도둑이 가져갈수 있는 무게
보석의 개수
보석의 무게 / 가격
최대 이윤의 소수점 2자리까지 출력
*/
#include<stdio.h>
#include<algorithm>
using namespace std;

struct temp {
	int a, b; // 보석 무게, 가치
	double c; // kg 당 가치
}kk[1010], tk;

int chkknap(temp i, temp j) {
	return i.c > j.c; // kg 당 가치로 정렬
}

int main_knapsank() {
	int i, m, n; // 도둑이 가질수 있는 무게 / 보석 개수
	double answer = 0;
	//입력
	scanf("%d", &m); //도둑이 가질수 있는 무게
	scanf("%d", &n); // 보석 개수
	for (i = 0; i < n; i++) {
		scanf("%d %d", &kk[i].a, &kk[i].b); // 보석 무게, 가치
		kk[i].c = (double)kk[i].b / kk[i].a; // kg당 가치
	}

	// 정렬
	sort(kk, kk + n, chkknap);

	// 무게 담기
	for (i = 0; i < n; i++) {
		
		if (m > kk[i].a) { // 도둑이 챙길수 있는 무게 보다 보석무게가 적을 때
			answer += kk[i].b;
			m -= kk[i].a;
		}
		else {
			answer += kk[i].c * m; // 챙길수 있는 남은 무게 * 보석 값어치
			break;
		}
	}

	//출력
	printf("%.2lf", answer);

	return 0;
}