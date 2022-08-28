/*
http://220.89.64.243/30stair/barn/barn.php?pname=barn
축사 지붕을 설치 하려고 한다. 
현재 소들이 있는 축사가 주어질 때, 지붕을 덮을 수 있는 최소 길이 출력
입력
m 사용 가능한 최대 판자수
s 전체 우리 수
c 소들이 있는 우리 수

입력을 받은 것을 기준으로 배열의 간격이 넓은 것을 기준으로 정렬


*/

#include<stdio.h>
#include<algorithm>
using namespace std;

bool chkbarn(int i, int j) { // 소가 있는 우리 번호 정렬
	return i < j;
}

bool chkbarn2(int i, int j) { // 우리 간의 간격 정렬
	return i > j;
}

int main_barn() {
	int i, m, s, c;
	int cow[210] = { 0, }; // 소들이 있는 우리를 넣을 배열
	int a[210] = { 0, }; // 소들이 있는 우리의 간격을 계산할 변수
	int dab;

	// 입력
	scanf("%d %d %d", &m, &s, &c); // 판자수, 우리수, 소들이 있는 우리수

	for (i = 0; i < c; i++) {
		scanf("%d", &cow[i]);
	}

	// 소 우리 번호 정렬 c= 소들이 있는 우리수
	sort(cow, cow + c, chkbarn);

	// 소들이 있는 우리의 간격을 계산
	for (i = 0; i < c - 1; i++) {
		a[i] = cow[i + 1] - cow[i] - 1;
	}

	// 우리 간의 간격 정렬 넓은 것을 제외 시키기 위해
	sort(a, a + c - 1, chkbarn2);

	// 우리 전체 - 간격이 넓은 부분
	dab = cow[c-1] - cow[0] + 1; // 우리 전체의 크기
	for (i = 0; i < m - 1; i++) { // 사용가능한 판자 - 1
		dab -= a[i];
	}

	// 출력
	printf("%d", dab);

	return 0;
}