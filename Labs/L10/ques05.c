#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to multiply each element in a 2D array by 3 and then divide it by 2
void multiplyAndDivide(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = (array[i][j] * 3) / 2;
        }
    }
}

// Function to measure the time taken to perform the operation on a 2D array
double measureTime(int** array, int rows, int cols, int num_iterations) {
    clock_t start_time, end_time;

    start_time = clock();
    for (int iter = 0; iter < num_iterations; ++iter) {
        multiplyAndDivide(array, rows, cols);
    }
    end_time = clock();

    return 
	double elapsed_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
   // return elapsed_time / num_iterations; // Average time per iteration
}

int main() {
    // Define array sizes
    int sizes[][2] = {{100, 100}, {500, 500}, {800, 800}};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);
    int num_iterations = 1000; // Adjust this based on your system's clock resolution

    for (int i = 0; i < num_sizes; ++i) {
        int rows = sizes[i][0];
        int cols = sizes[i][1];

        // Dynamic array with multiple malloc calls
        int** array1 = (int**)malloc(rows * sizeof(int*));
        for (int j = 0; j < rows; ++j) {
            array1[j] = (int*)malloc(cols * sizeof(int));
        }

        // Dynamic array with only 2 malloc calls
        int** array2 = (int**)malloc(rows * sizeof(int*));
        array2[0] = (int*)malloc(rows * cols * sizeof(int));
        for (int j = 1; j < rows; ++j) {
            array2[j] = array2[0] + j * cols;
        }

        // Initialize arrays with some values
        for (int j = 0; j < rows; ++j) {
            for (int k = 0; k < cols; ++k) {
                array1[j][k] = j * cols + k;
                array2[j][k] = j * cols + k;
            }
        }

        // Measure time for array with multiple malloc calls
        double time1 = measureTime(array1, rows, cols, num_iterations);
        printf("Array1 %dx%d: %.6f seconds\n", rows, cols, time1);

        // Measure time for array with only 2 malloc calls
        double time2 = measureTime(array2, rows, cols, num_iterations);
        printf("Array2 %dx%d: %.6f seconds\n", rows, cols, time2);

        // Free allocated memory
        free(array1[0]);
        free(array1);

        free(array2[0]);
        free(array2);
    }

    return 0;
}
