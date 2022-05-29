#include<stdio.h>
int main(){

	char op;
	double first,second;
	printf("enter an operator (+,-,*,/):");
	scanf("&c",&op);
	printf("enter two commands:");
	scanf("%1f %1f",&first,&second);
	switch(op){
	case '+':
	printf("first+second");
	case '-':
	printf("first-second");
	case '*':
	printf("first*second");
	case '/':
	printf("first/second") ;
	// operator doesn't match any case constant
	default:
	printf("error! operator is not correct");
	}
	return 0;
	}