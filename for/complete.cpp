/*
http://220.89.64.243/30stair/complete/complete.php?pname=complete
����� ���� �ڽ��� �Ǵ� ���� ��������� �Ѵ�.
��������� yes
�ƴϸ� no
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