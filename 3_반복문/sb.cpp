/*
http://220.89.64.243/30stair/sb/sb.php?pname=sb
7명의 농부의 수확량을 입력 받았을 때 
가장 수확량이 많은 농부의 번호 출력
*/

#include<stdio.h>

int main_sb() {
    int i, n, m = 0, d = 0;

    for (i = 1; i <= 7; i++) {
        scanf("%d", &n);
        if (n > m) {
            d = i;
            m = n;
        }
    }
    printf("%d", d);
    return 0;
}