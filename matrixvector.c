#include <stdio.h>

int main() {
    int a[4][4];
    int b[4][1];
    int product[4][1];
    int sum;

    printf("Masukkan elemen matriks 4x4 per baris:\n");
    for (int i=0; i < 4; i++) {
        printf("Baris ke-%d: ", i + 1);
        for (int j=0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Masukkan elemen vektor 4x1:\n");
    for (int i=0; i < 4; i++) {
        scanf("%d", &b[i][0]);
    }
    printf("\nHasil perkalian matriks dan vektor:\n");
    for (int i=0; i < 4; i++) {
        sum = 0;
        for (int j=0; j < 4; j++) {
            sum += a[i][j] * b[j][0];
        }
        product[i][0] = sum;
        printf("[%d]\n", product[i][0]); 
    }
    return 0;
}