#include<stdio.h>

	void printArray(void* arr, int size, char type)
	{
		int i;
		size=10;
		switch(type)
		{
			case 'i':
			for(i=0;i<size;i++)
			{
				printf("%d, ",((int*)arr)[i]);
				}	
				
			printf("\n");
			break;
			
			case 'c':
			for(i=0;i<size;i++)
			{
				printf("%c, ",((char*)arr)[i]);
				}	
				
			printf("\n");
			break;
			
			case 'f':
			for(i=0;i<size;i++)
			{
				printf("%f, ",((float*)arr)[i]);
				}	
				
			printf("\n");
			break;
			
			default:
				break;
		}
	}

void main(){
	int a[10]={0};
	char c[10]={'a','b','c','d','e','f','g','h','i','j'};
	float f[10]={0};

	printArray(a,10, 'i');
	printArray(c,10, 'c');
	printArray(f,10, 'f');	
}	
	
	
	
	
	
