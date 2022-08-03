/*
http://220.89.64.243/30stair/nsubset/nsubset.php?pname=nsubset
전체 방법의 수
*/

#include<stdio.h>
#include<math.h>

int main_nsubset() {
	long a, b;
	scanf("%ld %ld", &a, &b);

	printf("%ld", (long)pow(b, a));
	return 0;
}