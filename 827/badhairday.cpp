/*
http://220.89.64.243/30stair/bhd/bhd.php?pname=bhd
소는 자기 앞 쪽의 소만 볼 수 있다.
소의 키가 입력될때 정수리를 볼수있는 수 출력
*/

#include<stdio.h>

int main_bhd() {
	int i, j, n, m, s = -1, cnt = 0;
	int a[80080];

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &m);
		if (s == -1 || a[s] > m)
			a[++s] = m;
		else {
			for (s; s > -1 && a[s] <= m; --s) // 스택이 있지 않고 현재 값보다 작거나 같으면 뺸다.
				cnt += s;
			a[++s] = m; // 현재값을 스택에 넣는다.
		}
	}
	cnt += (s * (s + 1) / 2); // 스택이 비어있지 않으면 추가 계산
	printf("%lld", cnt);

	return 0;
}