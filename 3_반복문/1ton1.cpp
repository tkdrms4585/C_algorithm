/*
http://220.89.64.243/30stair/1ton1/1ton1.php?pname=1ton1
1���� n������ ���� ����ó�� ���
ex) �Է� 5
1+2+3+4+5=15
*/

#include<stdio.h>

int main_1ton1() {
    int i, n, s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        s += i;
        if (i != n)
            printf("%d+", i);
        else
            printf("%d=", i);
    }
    printf("%d", s);
    return 0;
}