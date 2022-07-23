/*
http://220.89.64.243/30stair/radd/radd.php?pname=radd
두 수를 입력받아
뒤집어서더한후 
더한 결과를 뒤집어서 출력
예)
입력 
12 345
21 + 543 = 564
출력
465
*/

#include<stdio.h>

int rev(int a) {	// 숫자를 뒤집는 함수
	int b = 0;
	while (1) {
		b = b * 10 + a % 10;
		a /= 10;
		if (a == 0) break;
	}
	return b;
}

int main_radd() {
	int a, b, s;
	scanf("%d %d", &a, &b);
	
	a = rev(a);		// a 뒤집기
	b = rev(b);	// b 뒤집기

	s = a + b;		// 더한 후
	s = rev(s);	// 더한 값 뒤집기

	printf("%d", s);

	return 0;
}