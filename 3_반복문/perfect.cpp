/*
http://220.89.64.243/30stair/perfect/perfect.php?pname=perfect
�������� �ڽ��� ������ ����� ���� �ڽŰ� ���� �� , �������� ���� �ڽ��� ������ ������ , ���׼��� ū��
n�� �Է� �ް�
������ �� �� PERFECT
������ �� �� DEFICIENT
���׼� �� �� ABUNDANT �� ���
*/

#include<stdio.h>

int main_perfect() {
    int i, n, sum = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n) // ������
        printf("%5d  PERFECT", n);
    else if (sum < n) // ������
        printf("%5d  DEFICIENT", n);
    else
        printf("%5d  ABUNDANT", n);


    return 0;
}