/*
http://220.89.64.243/30stair/coci_note/coci_note.php?pname=coci_note
1 ~ 8 ���� ������ ���� �Է� �� ��
�������� ascending
�������� descending
�����ִ��� mixed
���
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> //�������
int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if ((double)a / b > (double)c / d)
		printf("1");
	else if ((double)a / b < (double)c / d)
		printf("-1");
	else
		printf("0");
	return 0;
}