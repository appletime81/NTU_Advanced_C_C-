#include <stdio.h>


int combination(int, int);

int combination(int n, int m) {
    if (n == m || m == 0) {
        return 1;
    } else if (n >= m) {
        return combination(n - 1, m) + combination(n - 1, m - 1);
    } else {
        return 0;
    }
}

int main() {
    int n, m, res;

    scanf("%d", &n);
    scanf("%d", &m);

    res = combination(n, m);

    if (res == 0) {
        printf("input error");
    } else {
        printf("%d", res);
    }

    return 0;
}
