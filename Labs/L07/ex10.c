/*
*Programmer:Adina
*Date:10October2023
*Description: Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-
array which adds to a given number S. In case of multiple subarrays, return the subarray which comes

first on moving from left to right.
*/
		
#include <stdio.h>

int main() {
	int n;
	int arr[n];
	int i,j;
	printf("\nEnter the size of your array: ");
	scanf("%d",&n);
	printf("\nNow enter your array: ");
	for(i=0;i<n;i++)
	{
		printf("Enter element number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
    
    //int n = sizeof(arr) / sizeof(arr[0]);
    int num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
    int left = 0;
    int right = 0;
    int Sum = 0;

    while (right < n) {
        Sum += arr[right];

        while (Sum > num) {
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
