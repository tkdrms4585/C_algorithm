/*
http://220.89.64.243/30stair/complete/complete.php?pname=complete
약수의 합이 자신이 되는 수를 완전수라고 한다.
완전수라면 yes
아니면 no
*/

#include<stdio.h>

int main_complete() {
	int i, n, sum=0;
	scanf("%d", &n);
	for (i = 1; i < n; i++) {
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
		printf("yes");
	else
		printf("no");
	

	return 0;
}