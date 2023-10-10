/*
*Programmer:Adina
*Date:10Oct2023
*Description:T
This program takes an array with N elements as input, and then outputs the frequency of each element present in the
array..
*/
#include <stdio.h>    
     
int main()    
{   
	int n;
	int arr[n];
	int i,j;
	printf("\nEnter the size of your array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element number %d: ",i);
		scanf("%d",&arr[i]);
	}
      
       
        
    //Array fr will store frequencies of element    
    int frequency[n];    
        
    for(i = 0; i < n; i++){    
        int count = 1;    
        for(j = i+1; j < n; j++){    
            if(arr[i] == arr[j]){    
                count++;    
                //To avoid counting same element again    
                frequency[j] = -1;    
            }    
        }    
        if(frequency[i] != -1)    
            frequency[i] = count;    
    }    
        
    //Displays the frequency of each element present in array    
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(i = 0; i <n; i++){    
        if(frequency[i] != visited){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", frequency[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}
