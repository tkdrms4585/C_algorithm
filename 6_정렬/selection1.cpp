#include<stdio.h>


int main() {

int a[1000];
    int i, j, k, min, t;
    int n, s;

    scanf("%d %d", &n, &s);

    for (i = 0; i < n; i++) {
        scanf("%d ", &a[i]);
    }

    for (i = 0; i < s; i++) {
        k = i;
        min = a[i];
        for (j = i + 1; j < n; j++) {
            if (min > a[j]) {
                k = j;
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