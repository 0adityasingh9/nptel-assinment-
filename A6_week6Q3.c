#include <stdio.h>

int main() {
    int n, l, A[100][100], B[100][100];
    scanf("%d%d", &n, &l);

    // Reading the input matrix A
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Computing the smoothed matrix B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int il = i - l < 0 ? 0 : i - l;
            int ih = i + l >= n ? n - 1 : i + l;
            int jl = j - l < 0 ? 0 : j - l;
            int jh = j + l >= n ? n - 1 : j + l;
            int sum = 0;
            for (int u = il; u <= ih; u++) {
                for (int v = jl; v <= jh; v++) {
                    sum += A[u][v];
                }
            }
            B[i][j] = sum;
        }
    }

    // Printing the smoothed matrix B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", B[i][j]);
        }
    }
    printf("\n");

    return 0;
}

