/*
http://220.89.64.243/30stair/validate/validate.php?pname=validate
koi ������ ��ǻ�� ������ȣ 6�ڸ�����
�� 5�ڸ��� ������ ������ ���� 10���� ���� �������� �����̸�, 6��° �ڸ�.
���� 5���� ���ڰ� �־��� �� �������� ���Ͽ���
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