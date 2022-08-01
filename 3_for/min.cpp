/*
http://220.89.64.243/30stair/min/min.php?pname=min
n개의 수 중에 최소값 출력
*/

#include<stdio.h>

int main_min() {
    int i, n, d = 999;

    for (i = 0; i < 7; i++) {
        scanf("%d", &n);
        if (n < d)
            d = n;
    }

    printf("%d", d);
    return 0;
}