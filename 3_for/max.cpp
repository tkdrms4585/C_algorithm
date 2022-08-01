/*
http://220.89.64.243/30stair/max/max.php?pname=max
n개의 수 중에 최대값 출력
*/

#include<stdio.h>

int main_max() {
    int i, n, d = 0;

    for (i = 0; i < 7; i++) {
        scanf("%d", &n);
        if (n > d)
            d = n;
    }

    printf("%d", d);
    return 0;
}