#include <stdio.h>

int main() {
    int a[50][50];
    int n, m;
    int i, j;
    int sum = 0;

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

    // Calculate sum of boundary elements
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                sum += a[i][j];
            }
        }
    }

    printf("\nSum of boundary elements = %d\n", sum);

    return 0;
}
