/*
http://220.89.64.243/30stair/nsubset/nsubset.php?pname=nsubset
��ü ����� ��
*/

#include<stdio.h>
#include<math.h>

int main_nsubset() {
	long a, b;
	scanf("%ld %ld", &a, &b);

	printf("%ld", (long)pow(b, a));
	return 0;
}