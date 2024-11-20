#include <stdio.h>

int main() {
	int number1 = 6;
	int number2 = 9;
	int sum = number1 + number2;
	int difference = number1 - number2;
	int product = number1 * number2;
	float quotient = (float) number1 / number2;
	
	printf("Tong cua %d và %d la %d\n", number1, number2, sum);
	printf("Hieu cua %d và %d la %d\n", number1, number2, difference);
    printf("Tich cua %d và %d la %d\n", number1, number2, product);
    printf("Thuong cua %d và %d la %.2f\n", number1, number2, quotient);
}
