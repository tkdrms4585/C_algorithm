/*
http://220.89.64.243/30stair/calorie/calorie.php?pname=calorie
선택한 음식의 칼로리 계산
3 가지의 버거

1 . Cheeseburger (461 Calories)
2 . Fish Burger (431 Calories)
3 . Veggie Burger (420 Calories)
4 . no burger

3 가지 음료

1 . Soft Drink ( 130 Calories)
2 . Orange Juice (160 Calories)
3 . Milk (118 Calories)
4 . no drink

3 가지 side order(추가 주문)

1 . Fries (100 Calories)
2 . Baked Potato (57 Calories)
3 . Chef Salad (70 Calories)
4 . no side order

3 가지 디저트

1 . Apple Pie (167 Calories)
2 . Sundae (266 Calories)
3 . Fruit Cup (75 Calories)
4 . no dessert
*/

#include<stdio.h>

int main_cal() {
	int a, b, c, d, cal = 0;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	switch (a) {
	case 1:
		cal += 461;
		break;
	case 2:
		cal += 431;
		break;
	case 3:
		cal += 420;
		break;
	}

	switch (b) {
	case 1:
		cal += 130;
		break;
	case 2:
		cal += 160;
		break;
	case 3:
		cal += 118;
		break;
	}

	switch (c) {
	case 1:
		cal += 100;
		break;
	case 2:
		cal += 57;
		break;
	case 3:
		cal += 70;
		break;
	}

	switch (d) {
	case 1:
		cal += 167;
		break;
	case 2:
		cal += 266;
		break;
	case 3:
		cal += 75;
		break;
	}

	printf("Your total Calorie count is %d.", cal);
	return 0;
}