#include "calc.h"
#include <stdio.h>

void divide(double num1, double num2){
	printf("num1: %lf\n", num1);
	printf("num2: %lf\n", num2);
	double divisionResult = num1 / num2;
	printf("Division result: %lf / %lf = %lf\n", num1, num2, divisionResult);
}

void sum(double num1, double num2){
	printf("num1: %lf\n", num1);
	printf("num2: %lf\n", num2);
	double sumResult = num1 + num2;
	printf("Sum result: %lf + %lf = %lf\n", num1, num2, sumResult);
}
void substract(double num1, double num2){
	printf("num1: %lf\n", num1);
	printf("num2: %lf\n", num2);
	double subsResult = num1 - num2;
	printf("Substraction result: %lf - %lf = %lf\n", num1, num2, subsResult);
}
void multiply(double num1, double num2){
	printf("num1: %lf\n", num1);
	printf("num2: %lf\n", num2);
	double multiplicationResult = num1 * num2;
	printf("Substraction result: %lf * %lf = %lf\n", num1, num2, multiplicationResult);
}
