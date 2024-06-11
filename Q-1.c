#include<stdio.h>

int main() 
{
    char operator;
    int num1, num2;
    int result;

    printf("Select an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);

    switch(operator) 
	{
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
            
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct\n");
            break;
    }
}