/*
http://220.89.64.243/30stair/star/star.php?pname=star
입력 받은 n 만큼 * 출력
*/
#include<stdio.h>

int main_star() {
    int i, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        printf("*");
    return 0;
}