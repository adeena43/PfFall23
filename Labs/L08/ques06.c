/*
*Programmer:Adina
*Date:24October2023
*Description:A C program that
defines a user-defined function processArray to calculate the sum, maximum, and
minimum values in the array. The program should take the array and its size as
parameters and use the function to compute these values.
*/
#include <stdio.h>
void processArray(int arr[], int size){
	int i, sum=0, max=-99999, min=99999;
	for(i=0; i<size; i++){
		sum = sum + arr[i];
		if (arr[i] < min){
			min = arr[i];
		}//end if
		if (arr[i] > max){
			max = arr[i];
		}//end if
	}//end for
	printf("The sum of your array is: %d\n The maximum value of your array is: %d\n The minimum value of your array is: %d", sum, max, min);
}//end processArray

int main(){
	int size,i;
	printf("Enter the size of your array: ");
	scanf("%d", &size);
	int arr[size];
	for(i=0; i<size; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}//end for
	processArray(arr, size);
}//end main
