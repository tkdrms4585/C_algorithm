/*
http://220.89.64.243/30stair/log/log.php?pname=log
������ ���·� �볪���� ���� ��(�ﰢ�� ���)
n���� �볪���� �ﰢ�� ������� ���� ��
���ϴܰ� �ֻ�ܿ� ���� �볪�� ���� ���Ͽ���
���ϴ��� �볪���� �ּ������� ���ƾ� �Ѵ�.
*/

#include<stdio.h>

int main_log() {
    int n, cnt = 0;

    scanf("%d", &n);

    // ���ϴ� �볪�� �� = cnt-1
    // n(n-1)/2
    while (1) {
        cnt++;
        if (cnt * (cnt - 1) / 2 >= n) break;

    }
    printf("%d ", --cnt); // ���ϴ� �볪�� ��

    // �ֻ�� �볪�� ��
    while (1) {
        if (n - cnt <= 0) break;
        n -= cnt--;
    }
    printf("%d", n);

    return 0;
}