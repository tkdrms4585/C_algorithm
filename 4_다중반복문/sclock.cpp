/*
http://220.89.64.243/30stair/sclock/sclock.php?pname=sclock
홀수를 입력 받아 주어진 형식의 모래시계 모양으로 출력
입력 5
****$
 **$
  $
 $**
$****
*/

#include<stdio.h>

int main_sclock() {
    // cnt = 공백 조절용, s = 출력 조절용
    int i, j, n, cnt = 0, t, s = 0;
    scanf("%d", &n);

    t = n-1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - s; j++) { // 공백 개수
            if (j < cnt)
                printf(" ");
            else if (t == j)
                printf("$");
            else
                printf("*");
        }
        t--;

        if (i >= n / 2) { // i 행의 진행에 따라 cnt 변경
            cnt--;
            s--;
        }
        else {
            cnt++;
            s++;
        }
       
        printf("\n");
    }

    return 0;
}