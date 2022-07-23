/*
http://220.89.64.243/30stair/seq/seq.php?pname=seq
두 자연수를 입력 받고 그 사이 수를 순서대로 출력
*/

#include<stdio.h>

int main_seq() {
	int i, a, b, t=0;
	scanf("%d %d", &a, &b);
	
	if (b < a) {
		t = a;
		a = b;
		b = t;
	}
		
	for (i = a; i <= b; i++)
		printf("%d ", i);

	return 0;
}