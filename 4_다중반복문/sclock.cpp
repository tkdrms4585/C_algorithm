/*
http://220.89.64.243/30stair/sclock/sclock.php?pname=sclock
Ȧ���� �Է� �޾� �־��� ������ �𷡽ð� ������� ���
�Է� 5
****$
 **$
  $
 $**
$****
*/

#include<stdio.h>

int main_sclock() {
    // cnt = ���� ������, s = ��� ������
    int i, j, n, cnt = 0, t, s = 0;
    scanf("%d", &n);

    t = n-1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - s; j++) { // ���� ����
            if (j < cnt)
                printf(" ");
            else if (t == j)
                printf("$");
            else
                printf("*");
        }
        t--;

        if (i >= n / 2) { // i ���� ���࿡ ���� cnt ����
            cnt--;
            s--;
        }
        else {
            cnt++;
            s++;
        }
       
        printf("\n");
    }

    return 0;
}