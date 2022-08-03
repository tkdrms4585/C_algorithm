/*
http://220.89.64.243/30stair/3np1/3np1.php?pname=3np1
정수를 입력 받아
짝수이면 2로 나누고
홀수면 3배 한뒤 1을 더한다
1이 될 때 까지 반복
*/

#include<stdio.h>

int main_3np1() {
    int i, n;
    scanf("%d", &n);

    while (1) {
        printf("%d ", n);
        if (n == 1)
            break;
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
    }
    return 0;
}