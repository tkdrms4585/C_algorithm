/*
http://220.89.64.243/30stair/1ton/1ton.php?pname=1ton
1부터 n까지의 합을 출력
*/

#include<stdio.h>

int main_1ton() {
    int i, n, s = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        s += i;
    }

    printf("%d", s);
    return 0;
}