/*
*Programmer:Adina
*Date:10October2023
*Description: takes a number from the user and then prints a man according to it.
    *****
    *****
    *****
***********
     * *
      |
     \_/
     | |
*************
**  *****  **
**  *****  **
**  *****  **
**  *****  **
    *****
   **      **
   **      **
   **      **
   **      **
   **      **
*****   *****
*/

#include <stdio.h>
void cap(int n){
    int a,b,i,j;
    for(i=0;i<3;i++){
        for(j =0;j<n*2;j++){
            if(j<n){
                printf(" ");
            }else printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n*3-2;i++){
        if(i<2){
            printf(" ");
        }else printf("*");
    }
    printf("\n");
}

void face(n){
	int i,j;
    for(i=0;i<n*2;i++){
        if(i==n || i == n*2-1){
            printf("*");
        }else printf(" ");
    }
    printf("\n");
    for(i=0;i<n*2-2;i++){
        if(i==n*2-3) printf("|");
        else printf(" ");
    }
    printf("\n");
    for(j=0;j<2;j++){
        for(i=0;i<n+2;i++){
            if(j==0){
                if(i==n+1){
                    printf("(_)");
                    printf("\n\n");
                }
                else printf(" ");
                
            }else {
                if(i==n+1)printf("| |");
                else printf(" ");
            }
        }
    }
    printf("\n");
}

void body(int n){
	int i,j;
    for(i =0;i<n*3;i++){
        printf("*");
    }
    printf("\n");
    for(j=0;j<n;j++){
        for(i=0;i<n*3;i++){
            if(i<n-3 || i>n*3-3|| i>=n && i<n*2)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
void legs(int n){
	int i,j;
    for(j=0;j<n;j++){
        for(i=0;i<n*2;i++){
            if(i<=n-1 || i==n*2-3 ){
                printf(" ");
            }else printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n*3;i++){
        if(i==n*2-3) printf(" ");
        else printf("*");
    }
}
int main() {
    int a,b,c,i,j,k,n;
    printf("Enter value = ");
    scanf("%d",&n);
    
    cap(n);
    face(n);
    body(n);
    legs(n);
    return 0;
}
