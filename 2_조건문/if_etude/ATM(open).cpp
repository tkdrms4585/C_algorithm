/*
http://220.89.64.243/30stair/ATM/ATM.php?pname=ATM
ATM에서 인출할 때마다 0.5 $의 수수료를 내야한다
인출 가능한 금액은 5의 배수만 가능
거래후 계좌에 남은 금액 계산
입력
인출 금액, 최초 계좌의 금액
*/

#include<stdio.h>

int main_atm() {
	int x;
	double y;
	scanf("%d %lf", &x, &y);
	
	if (x % 5 == 0 && x+0.5 <= y) {
		y -= x + 0.5;
		printf("%.2lf", y);
	}
	else
		printf("%.2lf", y);
	return 0;
}