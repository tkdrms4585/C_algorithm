/*
http://220.89.64.243/30stair/selection2/selection2.php?pname=selection2
���� ������ �̷������ ��������
n���� �����Ͱ� s���� ���� �� ���¸� ���
*/

#include<stdio.h>

int main_selection1() {
    int a[1000];
    int i, j, k, min, t;
    int n, s;

    scanf("%d %d", &n, &s);

    for (i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }

    for (i = 0; i < s; i++) {
        k = i; // ���� ����Ʈ
        min = a[i];
        for (j = i + 1; j < n; j++) {
            if (min > a[j]) { // �ּҰ� Ž��
                k = j; //�ּ� ���� ����Ʈ
                min = a[j];
            }
        }
        t = a[i]; a[i] = a[k]; a[k] = t;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}