/*
http://220.89.64.243/30stair/fairy/fairy.php?pname=fairy
2000�� ���� 8�� ������ ������ �߰ߵȴ�.
������ ��Ÿ���� �ش� O
�ƴϸ� X ���
2000�� ������ �߰� �ȵ�.
*/

#include<stdio.h>

int main_fairy() {
	int y;
	scanf("%d", &y);
	if (y >= 2000 && y % 8 == 0)
		printf("O");
	else
		printf("X");
	return 0;
}