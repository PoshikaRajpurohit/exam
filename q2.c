#include <stdio.h>

#define ROWS 3
#define COLS 4

float calculateAverage(int arr[ROWS][COLS], int rows, int cols) {
    int sum = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    return (float)sum / totalElements;
}

 main() {
    int array[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    float avg = calculateAverage(array, ROWS, COLS);
    printf("Average of all elements: %.2f\n", avg);

}