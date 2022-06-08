#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
int main(int argc, char *argv[])
{
	if(argc < 1){
		return 0;
	}
	char operation;
	double n1, n2;

	printf("Enter an operator (+, -, *, /): \n");
	scanf("%c", &operation);
	printf("Enter two numbers: ");
	scanf("%lf %lf", &n1, &n2);


	switch (operation) {
		case '+':
			sum(n1, n2);
			break;
		case '-':
			substract(n1, n2);
			break;
		case '*':
			multiply(n1, n2);
			break;
		case '/':
			divide(n1, n2);
			break;
		default:
			printf("Operand not valid!\n");
 }
	return 0;
}
