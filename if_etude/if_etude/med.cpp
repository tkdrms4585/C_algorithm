/*
http://220.89.64.243/30stair/med/med.php?pname=med
�� ������ �Է¹޾� ũ������� �������� �� 
�߰��� ��ġ�� �� ���
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