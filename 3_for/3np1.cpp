/*
http://220.89.64.243/30stair/3np1/3np1.php?pname=3np1
������ �Է� �޾�
¦���̸� 2�� ������
Ȧ���� 3�� �ѵ� 1�� ���Ѵ�
1�� �� �� ���� �ݺ�
*/

#include<stdio.h>

int main_3np1() {
    int i, n;
    scanf("%d", &n);

    while (1) {
        printf("%d ", n);
        if (n == 1)
            break;
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n * 3 + 1;
    }
    return 0;
}