/*
http://220.89.64.243/30stair/white/white.php?pname=white
ü�� ���� ������ �Է¹ް�
�Ϻ��� ��Ʈ�� ���߱� ���� �ʿ��� ���� ���
*/

#include<stdio.h>

int main_white() {
	int a[8] = { 1,1,2,2,2,8 };
	int i, n;
	for (i = 0; i < 6; i++) {
		scanf("%d", &n);
		printf("%d ", a[i] - n);
	}
	return 0;
}