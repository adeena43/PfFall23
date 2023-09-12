/*
*Programmer:Adina
*Date:12Sept2023
*Description:This program prints a pyramid of stars for n numbers.

//--included files--//
#include<stdio.h>

//--Global variables--//

int main()
{
	 
  int n;  
  
  printf("Enter number of rows: ");  
  scanf("%d",&n);  
  
  for(int i=1; i<=n; i++)  
  {  
     for(int j=i; j<=n; j++)  
     {  
       printf(" ");  
     }  
     for(int k=1; k<=2*i-1; k++)  
     {  
       if(k==1 || k==(2*i-1)) printf("*");  
       else printf(" ");  
     }  
     printf("\n");  
  }  
  
  for(int i=n-1; i>=1; i--)  
  {  
     for(int j=n; j>=i; j--)  
     {  
       printf(" ");  
     }  
     for(int k=1; k<=2*i-1; k++)  
     {  
       if(k==1 || k==2*i-1) printf("*");  
       else printf(" ");  
     }  
     printf("\n");  
  }  
  
  return 0;  
}  
} //end main
