/*
http://220.89.64.243/30stair/validate/validate.php?pname=validate
koi 전자의 컴퓨터 고유번호 6자리에서
앞 5자리의 각각의 제곱수 합을 10으로 나눈 나머지가 검증이며, 6번째 자리.
앞의 5개의 숫자가 주어질 때 검증수를 구하여라
*/

#include<stdio.h>

int main_validate() {
	int i, n, sum = 0;
	for (i = 0; i < 5; i++) {
		scanf("%d", &n);
		sum += n * n;
	}
	sum %= 10;
	printf("%d", sum);


	return 0;
}