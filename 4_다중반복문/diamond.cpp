/*
http://220.89.64.243/30stair/diamond/diamond.php?pname=diamond
입력 받은 수로 다이아몬드 모양 출력
입력 3
  *
 ***
*****
 ***
  *
*/

#include<stdio.h>

int main_diamond() {
    // 반복문 변수, 중심, 전체크기, 카운트, 카운트 조절 용 스위치
    int i, j, center, nn, cnt;
    scanf("%d", &center);

    nn = center * 2 - 1;
    cnt = center - 1;
    for (i = 0; i < nn; i++) {
        for (j = 0; j < cnt; j++) { // 공백 개수
            printf(" ");
        }
        for (j = 0; j < nn - (cnt * 2); j++) { // 전체 크기 - 좌우 공백(공백*2)
            printf("*");
        }
        if (i >= center - 1) // i 행의 진행에 따라 cnt 변경
            cnt++;
        else
            cnt--;
        printf("\n");
    }

    return 0;
}