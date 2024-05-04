#include <stdio.h>

void disp(int a[][10], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[][10], int m, int n)
{
    int i, j;
    printf("Transpose of the matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%3d", a[j][i]);
        }
        printf("\n");
    }
}

void addition(int a[][10], int b[][10], int m, int n)
{
    int i, j, c[10][10];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of the matrices:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10], n, m, i, j;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter %d values for the first matrix: ", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter %d values for the second matrix: ", m * n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    addition(a, b, m, n);
    return 0;
}
