/*
http://220.89.64.243/30stair/empty_bottle/empty_bottle.php?pname=empty_bottle
�̺�Ʈ�� 2�� �����Ͽ� ���� �� �ִ� ������ �ִ밪�� ���� �� ���
*/

#include<stdio.h>

int main_eb() {
	int n, a = 0, b = 0;
	scanf("%d", &n);
	
	a += n;
	a += n / 4;
	b += n % 4;
	n = n / 4;
	a += n / 4;
	b += n % 4;

	printf("%d %d", a, b);
	return 0;
}