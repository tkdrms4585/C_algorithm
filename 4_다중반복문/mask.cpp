/*
http://220.89.64.243/30stair/mask/mask.php?pname=mask
   ABC
 + CCA
 ------
  1AB2
A,B,C �� 1 �̻� 9 ������ �ڿ����̰�, A , B , C �� ���� ���� ���� ��Ÿ�� ���� �ִ�.

�� ������ �����ϴ� ABC�� ���Ͽ���. �Է��� ����.
*/

#include<stdio.h>

int main_mask() {
	int a, b, c; // 
	int num1, num2;
	for (a = 1; a < 10; a++) {
		for (b = 1; b < 10; b++) {
			for (c = 1; c < 10; c++) {
				num1 = a * 100 + b * 10 + c;
				num2 = c * 100 + c * 10 + a;
				if (num1 + num2 == 1000 + a * 100 + b * 10 + 2)
					printf("%d%d%d\n", a, b, c);
			}
		}
	}
	
	return 0;
}