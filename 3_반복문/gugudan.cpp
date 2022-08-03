/*
http://220.89.64.243/30stair/gugudan/gugudan.php?pname=gugudan
입력 받은 구구단 n단 출력
*/

#include<stdio.h>

int main_gugudan() {
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= 9; i++)
        printf("%d*%d=%d\n", n, i, n * i);
    return 0;
}