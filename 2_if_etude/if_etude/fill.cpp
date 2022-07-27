/*
http://220.89.64.243/30stair/fill/fill.php?pname=fill
포지션별 정보를 토대로 가능한 포지션을 출력
*/

#include<stdio.h>
int main_fill() {
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);
    int d = 0;

    if (a <= 4.5 && b >= 150 && c >= 200) {
        printf("Wide Receiver ");
        d++;
    }

    if (a <= 6.0 && b >= 300 && c >= 500) {
        printf("Lineman ");
        d++;
    }

    if (a <= 5.0 && b >= 200 && c >= 300) {
        printf("Quarterback ");
        d++;
    }
    if (d == 0)
        printf("No positions");

    return 0;
}