#include<stdio.h>
#include<stdlib.h>

int main()
{
	double number1, number2;
	char operation;
	printf("Enter the calculation\n");
	scanf_s("%lf %c %lf", &number1, &operation,1, &number2);
	switch (operation)
	{
	case'+':printf("=%lf\n", number1+number2); break;
	case'-':printf("=%lf\n", number1-number2); break;
	case'/':printf("=%lf\n", number1/number2); break;
	case'*':printf("=%lf\n", number1*number2); break;
	default:printf("Error\n");
	}
	system("pause");
}