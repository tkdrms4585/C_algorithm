/*
http://220.89.64.243/30stair/punch_game/punch_game.php?pname=punch_game
�ָ�: 10 ������
�������� : 15 ������
�Ƶ��� : 30 ������
������ġ:40 ������
������ : 45 ������
5���� ������ �Է� �޴´�
�ð� ���� ������ 10ȸ�� ���� ����
������ ���� 100�̸� "you win"
������ ���� 100���ϸ� "time out"
*/


#include<stdio.h>

int main_punch_game() {
	int a, b, c, d, e, f = 10, sum = 0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	if (a + b + c + d + e > 10)
		printf("time out");
	else if (a * 10 + b * 15 + c * 30 + d * 40 + e * 45 >=100)
		printf("you win");
	else
		printf("game over");

	return 0;
}