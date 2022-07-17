/*
http://220.89.64.243/30stair/three/three.php?pname=three
세자리수 곱셈
   472…… (1)
 ×385…… (2)
---------------
  2360…… (3)
 3776 …… (4)
1416  …… (5)
--------------
181720…… (6)

입력
(1), (2)
출력
(3), (4), (5), (6)
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_three() {
	int a, b;

	scanf("%d %d", &a, &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * (b % 100 / 10));
	printf("%d\n", a * (b / 100));
	printf("%d", a * b);

	return 0;
}