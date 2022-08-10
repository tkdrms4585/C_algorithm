/*
http://220.89.64.243/30stair/selection2/selection2.php?pname=selection2
선택 정렬이 이루어지는 과정으로
n개의 데이터가 s번의 스탭 후 상태를 출력
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
        k = i; // 현재 포인트
        min = a[i];
        for (j = i + 1; j < n; j++) {
            if (min > a[j]) { // 최소값 탐색
                k = j; //최소 값의 포인트
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