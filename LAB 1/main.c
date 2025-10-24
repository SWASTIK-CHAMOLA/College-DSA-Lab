#include <stdio.h>

int main() {
    int a[50][50];
    int n, m;
    int i, j, k;
    int rowSum = 0, colSum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);

    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum of common elements in rows
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            for (k = j + 1; k < m; k++) {
                if (a[i][j] == a[i][k]) {
                    rowSum += a[i][j];
                    break;  // to avoid counting same element again
                }
            }
        }
    }

    // Sum of common elements in columns
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            for (k = i + 1; k < n; k++) {
                if (a[i][j] == a[k][j]) {
                    colSum += a[i][j];
                    break;
                }
            }
        }
    }

    printf("\nSum of common elements in rows = %d", rowSum);
    printf("\nSum of common elements in columns = %d", colSum);
    printf("\nDifference = %d\n", rowSum - colSum);

    return 0;
}
