/*
http://220.89.64.243/30stair/med/med.php?pname=med
세 정수를 입력받아 크기순으로 나열했을 때 
중간에 위치한 값 출력
*/

#include<stdio.h>
int main_med() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    if (a > b) {
        if (b >= c) {
            printf("%d", b);
        }
        else {
            if (a > c) {
                printf("%d", c);
            }
            else {
                printf("%d", a);
            }
        }
    }
    else if (a < b) {
        if (b <= c) {
            printf("%d", b);
        }
        else {
            if (a < c) {
                printf("%d", c);
            }
            else {
                printf("%d", a);
            }
        }
    }
    else {
        printf("%d", b);
    }
    return 0;
}