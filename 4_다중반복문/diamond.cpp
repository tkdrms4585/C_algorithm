/*
http://220.89.64.243/30stair/diamond/diamond.php?pname=diamond
�Է� ���� ���� ���̾Ƹ�� ��� ���
�Է� 3
  *
 ***
*****
 ***
  *
*/

#include<stdio.h>

int main_diamond() {
    // �ݺ��� ����, �߽�, ��üũ��, ī��Ʈ, ī��Ʈ ���� �� ����ġ
    int i, j, center, nn, cnt;
    scanf("%d", &center);

    nn = center * 2 - 1;
    cnt = center - 1;
    for (i = 0; i < nn; i++) {
        for (j = 0; j < cnt; j++) { // ���� ����
            printf(" ");
        }
        for (j = 0; j < nn - (cnt * 2); j++) { // ��ü ũ�� - �¿� ����(����*2)
            printf("*");
        }
        if (i >= center - 1) // i ���� ���࿡ ���� cnt ����
            cnt++;
        else
            cnt--;
        printf("\n");
    }

    return 0;
}