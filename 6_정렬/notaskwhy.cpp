/*
http://220.89.64.243/30stair/notaskwhy/notaskwhy.php?pname=notaskwhy
학생 n 명의 반, 번호가 입력으로 주어진다.
반은 1, 4, 2, 3 순으로
같은 반 내에서는 1, 3반은 오름차순 2, 4반은 내림차순으로 정렬

내장 함수 사용 x 

★ 생각(코딩) 순서 ★
1. 반을 기준으로 오름차순, 번호를 기준으로 내림차순 정렬 (문제의 정답과 다르게)
2. 구조체를 사용
3. 내장 함수를 사용
4. 새로운 정렬 방법 도입 (반을 기준으로 1,4,2,3 순으로 정렬 되게)
5. 정답 코드 (1, 3 반 기준 오름차순 && 2,4반 기준 내림차순)
*/

#include<stdio.h>

struct temp{
	int a, b, c;
}stu[101], t;

int main_notask() {
	int i, j, n;
	int rank[5] = { 0,1,3,4,2 };

	// 입력
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &stu[i].a, &stu[i].b);
		stu[i].c = rank[stu[i].a];
	}

	for (i = 0; i < n-1; i++) {
		for (j = i + 1; j < n; j++) {
			if (stu[i].c > stu[j].c || 
				stu[i].a % 2 == 1 && stu[i].a == stu[j].a && stu[i].b > stu[j].b ||
				stu[i].a % 2 == 0 && stu[i].a == stu[j].a && stu[i].b < stu[j].b)
				t = stu[i], stu[i] = stu[j], stu[j] = t;
		}
	}

	for (i = 0; i < n; i++)
		printf("%d %d\n", stu[i].a, stu[i].b);

	return 0;
}