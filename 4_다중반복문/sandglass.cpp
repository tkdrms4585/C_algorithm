/*
http://220.89.64.243/30stair/sclock/sclock.php?pname=sclock
홀수를 입력 받아 주어진 형식의 모래시계 모양으로 출력
입력 5
*****
 ***
  *
 ***
*****
*/

#include<stdio.h>

int main_sandglass() {
    int i, j, n, cnt = 0, t, t1=1;
    scanf("%d", &n);

    t = n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < cnt; j++) { // 공백 개수
            printf(" ");
        }
        for (j = 1; j <= n - (cnt * 2); j++) { // 전체 크기 - 좌우 공백(공백*2)
            
            printf("*");
        }
        
        if (i >= n/2 ) // i 행의 진행에 따라 cnt 변경
            cnt--;
        else
            cnt++;
        printf("\n");
    }

    return 0;
}