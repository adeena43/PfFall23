/*
*Programmer:Adina
*Date:10October2023
*Description: Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-
array which adds to a given number S. In case of multiple subarrays, return the subarray which comes

first on moving from left to right.
*/
		
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int num = 15;
	int i;
    int left = 0;
    int right = 0;
    int Sum = 0;

    while (right < n) {
        Sum += arr[right];

        while (Sum > targetSum) {
            Sum -= arr[left];
            left++;
        }

        if (Sum == num) {
            printf("Subarray with the sum %d is: ", num);
            for (i = left; i <= right; i++) {
                printf("%d ", arr[i]);
            }
            return 0;
        }

        right++;
    }

    printf("No subarray with the sum %d found.\n", num);
    return 0;
}

