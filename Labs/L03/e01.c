#includestdio.h>
int main()
{
	int num1,num2;
	char oprtr;
	printf("___CALCULATOR___\n");
	printf("Enter your first number: ");
	scanf("%d",&num1);
	printf("\nEnter your second number: ");
	scanf("%d",&num2);
	printf("\nNow enter the operation you want to perform +, -, *, /");
	scanf("%c",&oprtr);
	if(oprtr=='+')
		printf("%d + %d",num1+num2);
	if(oprtr=='-')
		printf("%d - %d",num1-num2);
	if(oprtr=='*')
		printf("%d x %d",num1*num2);
	if(oprtr=='/')
		printf("%d / %d",num1/num2);

}
