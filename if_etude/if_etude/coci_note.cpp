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
int main_coci() {
	int a, b, c, d, e, f, g, h;
	scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
	if (a < b && b < c && c < d && d < e && e < f && f < g && g < h)
		printf("ascending");
	else if (a > b && b > c && c > d && d > e && e > f && f > g && g > h)
		printf("descending");
	else
		printf("mixed");
		
	return 0;
}