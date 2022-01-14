#include <stdio.h>
#include <stdlib.h>

#define H 3
#define W 3

int main() {
    int i, j, k;
    int matrix1[H][W] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int matrix2[H][W] = {{2,  4,  6},
                         {8,  10, 12},
                         {14, 16, 18}};
    int matrixRes[H][W];


    // 矩陣相乘
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            matrixRes[i][j] = 0;
            for (k = 0; k < W; k++) {
                matrixRes[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // 打印結果
    for (i = 0; i < H; i++) {
        for (j = 0; j < W; j++) {
            printf("%-5d", matrixRes[i][j]);
        }
        printf("\n");
    }

    return 0;
}
