// This C program is a simple calculator using if-else condition
#include <stdio.h>

int main()
{
	char Operator;
	float number1, number2, result = 0;

	printf("\n Please Choose an Operator (+, -, *, /)  :  ");
  	scanf("%c", &Operator);

	printf("\n Please Enter Values for two Operands: ");
  	scanf("%f %f", &number1, &number2);

  	if(Operator == '+')
  	{
  		printf("\n The result of %.2f + %.2f  = %.2f", number1, number2, number1 + number2);
  	}
  	else if(Operator == '-')
  	{
  		printf("\n The result of %.2f - %.2f  = %.2f", number1, number2, number1 - number2);
  	}
  	else if(Operator == '*')
  	{
  		printf("\n The result of %.2f * %.2f  = %.2f", number1, number2, number1 * number2);
  	}
  	else if(Operator == '/')
  	{
  		printf("\n The result of %.2f / %.2f  = %.2f", number1, number2, number1 / number2);
  	}
  	else
  	{
  		printf("\n You have entered an Invalid Operator.");
	}

  	return 0;
}
