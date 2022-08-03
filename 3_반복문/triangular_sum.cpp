/*
http://220.89.64.243/30stair/triangular_sum/triangular_sum.php?pname=triangular_sum
n 번째 삼각수의 가중치의 합이 k X T(k+1)와 같이 정의 될 때
n을 입력 받았을 때의 값을 출력
*/

#include<stdio.h>
int T(int n) {
    int w = 0;
    for (int i = 1; i <= n; i++) {
        w += i;
    }
    return w;
}
int main_triangular_sum() {
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += i * T(i + 1);
    }
    printf("%d", sum);
    return 0;
}