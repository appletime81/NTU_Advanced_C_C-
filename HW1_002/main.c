#include <stdio.h>
#include <stdlib.h>

int main() {
    int taxRate, diff;
    unsigned long int inputNum;
    int res;
    char str[50];


    gets(str);
    inputNum = strtol(str, NULL, 10 );


    if (0 < inputNum && inputNum <= 370000) {
        taxRate = 6;
        diff = 0;
    } else if (370000 < inputNum && inputNum <= 990000) {
        taxRate = 13;
        diff = 25900;
    } else if (990000 < inputNum && inputNum <= 1980000) {
        taxRate = 21;
        diff = 105100;
    } else if (1980000 < inputNum && inputNum <= 3720000) {
        taxRate = 30;
        diff = 283300;
    } else if (inputNum > 3720000) {
        taxRate = 40;
        diff = 655300;
    }

    res = (inputNum * taxRate / 100) - diff;

    printf("income %d\n", inputNum);
    printf("tax rate %d%\n", taxRate);
    printf("tax %d\n", inputNum * taxRate / 100);
    printf("discount %d\n", diff);
    printf("taxpay %d\n", res);

    return 0;
}
