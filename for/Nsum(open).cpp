/*
http://220.89.64.243/30stair/Nsum/Nsum.php?pname=Nsum
1~n까지의 합은 m이 된다.
m이 주어질때 n을 구하여라.
*/

#include<stdio.h>

int main_Nsum() {
	int m, n = 0;
	scanf("%d", &m);
	while (m != 0) {
		m -= ++n;
	}
	printf("%d", n);

	return 0;
}