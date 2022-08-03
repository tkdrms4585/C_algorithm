/*
http://220.89.64.243/30stair/ft/ft.php?pname=ft
n의 약수
약수의 개수
약수의 총합
약수의 곱의 1의자리 숫자
를 순서대로 출력
*/

#include<stdio.h>

int main_ft() {
    int i, n, cnt = 0, sum = 0, mul = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            cnt++;
            sum += i;
            mul *= i;
            mul %= 10; // 오버플로우 방지

        }
    }
    printf("\n");
    printf("%d\n", cnt);
    printf("%d\n", sum);
    printf("%d\n", mul);
    return 0;
}