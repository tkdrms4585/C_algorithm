/*
http://220.89.64.243/30stair/log/log.php?pname=log
안정된 형태로 통나무를 쌓을 때(삼각형 모양)
n개의 통나무를 삼각형 모양으로 쌓을 때
최하단과 최상단에 놓을 통나무 수를 구하여라
최하단의 통나무는 최소한으로 놓아야 한다.
*/

#include<stdio.h>

int main_log() {
    int n, cnt = 0;

    scanf("%d", &n);

    // 최하단 통나무 수 = cnt-1
    // n(n-1)/2
    while (1) {
        cnt++;
        if (cnt * (cnt - 1) / 2 >= n) break;

    }
    printf("%d ", --cnt); // 최하단 통나무 수

    // 최상단 통나무 수
    while (1) {
        if (n - cnt <= 0) break;
        n -= cnt--;
    }
    printf("%d", n);

    return 0;
}