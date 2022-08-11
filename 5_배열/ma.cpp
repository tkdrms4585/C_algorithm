/*
http://220.89.64.243/30stair/ma/ma.php?pname=ma
히스토그램을 출력하는 문제
입력의 끝은 0

입력
6 2 9 8 3 4 7 0
출력
     *
     * *
     * *     *
 *   * *     *
 *   * *     *
 *   * *   * *
 *   * * * * *
 * * * * * * *
 * * * * * * *
 6 2 9 8 3 4 7
*/

#include<stdio.h>

int main_ma() {
    int num[31] = { 0, }; // 배열을 0으로 초기화
    int i, j, cnt = 0;
    
    for (i = 1; i <= 30;i++) {
        scanf("%d", &num[i]);
        if (num[i] == 0) break;
        cnt++;
    }

    for (i = 9; i > 0; i--) {
        for (j = 1; j <= cnt; j++) {
            if (i <= num[j])
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (j = 1; j <= cnt; j++)
        printf(" %d", num[j]);

    return 0;
}