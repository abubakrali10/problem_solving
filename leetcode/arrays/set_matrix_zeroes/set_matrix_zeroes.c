#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void setZeroes(int** matrix, int matrixSize, int* matrixColSize)
{
    int i, j;
    bool *rows = calloc(matrixSize,sizeof(bool));
    bool *cols = calloc(*matrixColSize, sizeof(bool));

    for (i = 0; i < matrixSize; i++)
    {
        for (j = 0; j < *matrixColSize; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    for (i = 0; i < matrixSize; i++)
    {
        for (j = 0; j < *matrixColSize; j++)
        {
            if (rows[i] || cols[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    free(rows);
    free(cols);
}