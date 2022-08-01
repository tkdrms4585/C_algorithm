/*
http://220.89.64.243/30stair/rep/rep.php?pname=rep
1부터 입력 받은 n까지 출력
*/

#include<stdio.h>

int main_rep() {
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d ", i);
}