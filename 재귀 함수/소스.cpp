#include<stdio.h>
//int sum = 0;
int pro(int v, int sum) {
	//sum += v;
	printf("%d\n", v);
	if (v == 5) {
		return sum + v;
	}
	return pro(v + 1, sum+v);
}

int main_test() {
	printf("%d", pro(1, 0));

	return 0;
}