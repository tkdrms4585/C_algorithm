/*
http://220.89.64.243/30stair/sb/sb.php?pname=sb
7���� ����� ��Ȯ���� �Է� �޾��� �� 
���� ��Ȯ���� ���� ����� ��ȣ ���
*/

#include<stdio.h>

int main_sb() {
    int i, n, m = 0, d = 0;

    for (i = 1; i <= 7; i++) {
        scanf("%d", &n);
        if (n > m) {
            d = i;
            m = n;
        }
    }
    printf("%d", d);
    return 0;
}