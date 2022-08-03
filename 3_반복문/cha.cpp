/*
http://220.89.64.243/30stair/cha/cha.php?pname=cha
두 수를 입력 받아
앞 수 - 뒷 수를 반복
뺀 값이 음수면 종료 아니면 반복
*/
#include<stdio.h>
int main_cha() {
    int i, a, b, c = 0;

    scanf("%d%d", &a, &b);
    printf("%d %d", a, b);

    while (1) {
        c = a - b;
        a = b;
        b = c;
        if (c < 0) 
            break;
        printf(" %d", c);
    }

    return 0;
}