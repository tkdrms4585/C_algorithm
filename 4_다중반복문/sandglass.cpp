/*
http://220.89.64.243/30stair/sclock/sclock.php?pname=sclock
Ȧ���� �Է� �޾� �־��� ������ �𷡽ð� ������� ���
�Է� 5
*****
 ***
  *
 ***
*****
*/

#include<stdio.h>

int main_sandglass() {
    int i, j, n, cnt = 0, t, t1=1;
    scanf("%d", &n);

    t = n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < cnt; j++) { // ���� ����
            printf(" ");
        }
        for (j = 1; j <= n - (cnt * 2); j++) { // ��ü ũ�� - �¿� ����(����*2)
            
            printf("*");
        }
        
        if (i >= n/2 ) // i ���� ���࿡ ���� cnt ����
            cnt--;
        else
            cnt++;
        printf("\n");
    }

    return 0;
}