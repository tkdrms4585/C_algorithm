#include <stdio.h> 

int main_test() {

    int n;
    scanf("%d", &n);
    int ck[10000];
    int num[10000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        int ber = 0;
        int x = 2, y = 1, cnt = 1;
        while (1) {
            ber = (x * x) + y;
            if (ber >= num[i]) {
                if (ber == num[i] || num[i] == 1) ck[i] = 1;
                break;
            }
            x++;
            cnt++;
            y = 0;
            for (int i = 1; i <= cnt; i++) {
                y += i;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (ck[i] == 1) printf("%d Y\n", num[i]);
        else printf("%d N\n", num[i]);
    }

    return 0;
}