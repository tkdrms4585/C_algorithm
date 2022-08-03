/*
http://220.89.64.243/30stair/perfect/perfect.php?pname=perfect
완전수란 자신을 제외한 약수의 합이 자신과 같은 수 , 부족수는 합이 자신의 수보다 작은수 , 과잉수는 큰수
n을 입력 받고
완전수 일 땐 PERFECT
부족수 일 땐 DEFICIENT
과잉수 일 땐 ABUNDANT 를 출력
*/

#include<stdio.h>

int main_perfect() {
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n) // 완전수
        printf("%5d  PERFECT", n);
    else if (sum < n) // 부족수
        printf("%5d  DEFICIENT", n);
    else
        printf("%5d  ABUNDANT", n);


    return 0;
}