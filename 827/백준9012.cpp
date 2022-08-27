/*
https://www.acmicpc.net/problem/9012
제대로 된 괄호 쌍이면 YES
아니면 NO 출력
*/

#include<stdio.h>

int main_9012() {
	int i,j, n, p = -1, k = 0;
	char a[55]={0,};
	char b[2][10]={"YES","NO"};
	char s;
	scanf("%d", &n);
	for (j = 0; j < n; j++) {
		scanf("%s", a);
		p = -1, k = 0;
		for (i = 0; a[i] != 0; i++) {
			if (a[i] == '(')
				++p;
			else
				--p;
			if (p < -1) {
				k = -1;
				break;
			}
		}
		if (p > -1)
			k = -1;
		if (k == -1)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}