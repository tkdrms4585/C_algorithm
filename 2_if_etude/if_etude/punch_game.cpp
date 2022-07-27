/*
http://220.89.64.243/30stair/punch_game/punch_game.php?pname=punch_game
주먹: 10 데미지
날아차기 : 15 데미지
아도겐 : 30 데미지
연속펀치:40 데미지
던지기 : 45 데미지
5가지 공격이 입력 받는다
시간 제한 때문에 10회만 공격 가능
데미지 합이 100이면 "you win"
데미지 합이 100이하면 "time out"
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