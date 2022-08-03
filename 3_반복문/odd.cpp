/*
http://220.89.64.243/30stair/odd/odd.php?pname=odd
7개의 자연수가 주어질 때
이 중 홀수의 합과
홀수 중 최소값 출력
*/

#include<stdio.h>

int main_odd() {
    int i, n, s = 0, min = 200;
    for (i = 0; i < 7; i++) {
        scanf("%d", &n);
        if (n % 2 == 1) {
            s += n;
            if (n < min)
                min = n;
        }
    }
    if (s == 0)
        printf("-1");
    else
        printf("%d\n%d", s, min);

    return 0;
}