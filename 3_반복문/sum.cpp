/*
http://220.89.64.243/30stair/sum/sum.php?pname=sum
n개의 수를 입력 받아 합을 출력
*/

#include<stdio.h>

int main_sum() {
    int i, a, d = 0;
    for (i = 0; i < 7; i++) {
        scanf("%d", &a);
        d += a;
    }
    printf("%d", d);

    return 0;
}