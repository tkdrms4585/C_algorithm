/*
http://220.89.64.243/30stair/bit_pos/bit_pos.php?pname=bit_pos
정수 n을 이진수로 나타내였을때 1이 나타나는 위치 출력
*/

#include<stdio.h>
int main_bit_pos() {
    int n, cnt = 0;

    scanf("%d", &n);
    while (n) {
        if (n % 2 == 1)
            printf("%d ", cnt);
        cnt++;
        n /= 2;
    }

    return 0;
}