/*
http://220.89.64.243/30stair/ftod/ftod.php?pname=ftod
0과 1사이의 분수가 입력으로 주어질 때 소수이하 k자리까지 출력
*/

#include<stdio.h>

int main_ftod() {
    int a, b, k, i;

    scanf("%d %d %d", &a, &b, &k);

    printf("0.");

    for (i = k; i > 0; i--) {
        a *= 10;
        printf("%d", a / b);
        a %= b;
    }

    return 0;
}