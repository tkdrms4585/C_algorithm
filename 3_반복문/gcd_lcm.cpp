/*
http://220.89.64.243/30stair/gcd_lcm/gcd_lcm.php?pname=gcd_lcm
�� ���� �ִ� ������� �ּ� ������� ���
*/

#include<stdio.h>

int main_gcd_lcm() {
    int a, b, temp, c;

    scanf("%d%d", &a, &b);
    c = a * b;
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }
    while (b) {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("%d %d", a, c / a);


    return 0;
}