/*
http://220.89.64.243/30stair/ft/ft.php?pname=ft
n�� ���
����� ����
����� ����
����� ���� 1���ڸ� ����
�� ������� ���
*/

#include<stdio.h>

int main_ft() {
    int i, n, cnt = 0, sum = 0, mul = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            cnt++;
            sum += i;
            mul *= i;
            mul %= 10; // �����÷ο� ����

        }
    }
    printf("\n");
    printf("%d\n", cnt);
    printf("%d\n", sum);
    printf("%d\n", mul);
    return 0;
}