#include <stdio.h>
#include <math.h>

/**
 *  * This code computes simple arithmetic calculations
 *  * ops - These are the operators created for the program
 *  * op - This is the operator you want to use out of the operators available in (ops)
 *  * op1 - This is the first input operand
 *  * op2 - This is the second input operand
 *  *
 */
int main() 
{
	int op1;
	printf("Input your first operand: ");
	scanf("%d", &op1);
	if (op1 == 0) {
		printf("Invalid input for first operand\n");
		return 0;
	}
	 int op;
	 printf("Input the operator: ");
	 scanf("%d", &op);

	int op2;
	printf("Input your second operand: ");
	scanf("%d", &op2);
	if (op2 == 0) {
		printf("Invalid input for second operand\n");
		return 0;
	}

	if (op == '+') {
		int result = op1 + op2;
		printf("%d\n", result);
	} else if (op == '-') {
		int result = op1 - op2;
		printf("%d\n", result);
	} else if (op == '/') {
		double result = (double)op1 / op2;
		printf("%lf\n", result);
	} else if (op == '*') {
		int result = op1 * op2;
		printf("%d\n", result);
	} else if (op == '%') {
		int result = op1 % op2;
		printf("%d\n", result);
	} else if (op == '!') {
		int result = 1;
		for (int i = 2; i <= op1; i++) {
			result *= i;
		}
		 printf("%d\n", result);
	} else {
		printf("The operator you entered is not available\n");
	}

	    return 0;
}
