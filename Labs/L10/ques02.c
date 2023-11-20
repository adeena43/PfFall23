#include<stdio.h>
#include<stdlib.h>

void swap(void *a, void *b, int size)
{
	unsigned char* p1 = (unsigned char*) a;
	unsigned char* p2 = (unsigned char*) b;
	
	size_t i;
	
	for(i=0;i<size;i++)
	{
		p1[i]^=p2[i];
		p2[i]^=p1[i];
		p1[i]^=p2[i];
	}
}
int main()
{
	int a,b;
	char c,d;
	printf("\nEnter two numbers to swap: ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\nEnter two letters to swap: ");
	scanf(" %c",&c);
	scanf(" %c",&d);	
	
	printf("\nBefore swapping: a= %d, b= %d",a, b);
	swap(&a,&b, sizeof(int));
	printf("\nAfter swapping: a= %d, b= %d",a,b);
	
	printf("\nBefore swapping: c= %c, d= %c",c, d);
	swap(&c,&d, sizeof(char));
	printf("\nAfter swapping: c= %c, d= %c",c,d);

}
