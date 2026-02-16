#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE* ptr = fopen("mv.txt", "r");
    if (ptr == NULL)
    {
        printf("PROBLEM!!!");
        return 0;
    }
    int row, col;
    fscanf(ptr, "%d %d", &row, &col);

    int **matrix = malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        matrix[i] = malloc(col * sizeof(int));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fscanf(ptr, "%d", &matrix[i][j]);
        }
    }
    int vectorSize;
    fscanf(ptr, "%d", &vectorSize);

    int *vector = malloc(vectorSize * sizeof(int));

    for (int i = 0; i < vectorSize; i++)
    {
        fscanf(ptr, "%d", &vector[i]);
    }

    int *solution = malloc(row * sizeof(int));

    int start = (int) clock();

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += matrix[i][j] * vector[j];
        }
        solution[i] = sum;
    }

    int end = (int) clock();

    for (int i = 0; i < row; i++)
    {
        printf("%d ", solution[i]);
    }

    printf("\nThis computation took %d clock ticks.", (end - start));
    
    return 0;
}