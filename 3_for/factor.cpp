/*
http://220.89.64.243/30stair/factor/factor.php?pname=factor
주어지는 수의 약수 출력
*/

#include<stdio.h>

int main_factor() {
    int i, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d\n", i);
    }

    return 0;
}