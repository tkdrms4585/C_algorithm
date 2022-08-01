/*
http://220.89.64.243/30stair/yaksu/yaksu.php?pname=yaksu
n과 k를 입력 받고
n의 k번째 약수 출력
*/

#include<stdio.h>

int main_yaksu() {
    int i, n, k, cnt = 0, dab = 0;

    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            cnt++;
        if (k == cnt) {
            dab = i;
            break;
        }
    }
    printf("%d", dab);

    return 0;
}