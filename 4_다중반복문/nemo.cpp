/*
http://220.89.64.243/30stair/nemo/nemo.php?pname=nemo
n을 입력 받아 n * n 크기의 네모 출력
입력 4
****
*  *
*  *
****
*/

#include<stdio.h>

int main_nemo() {
    int i, j, n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }

    return 0;
}