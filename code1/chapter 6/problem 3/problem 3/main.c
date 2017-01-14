/*
Author: Preeti Benake

Problem Description:
Write a program that accepts two integer values typed in by the user. Display the
result of dividing the first integer by the second, to three-decimal-place accuracy.
Remember to have the program check for division by zero.

*/

#include<stdio.h>

int main() {

	int a, b;
	float c;

	printf("Enter two integers value: ");
	scanf("%d %d", &a, &b);
	if (b == 0)
		printf("\nInvalid input ");
	else
		c = a / (float)b;
		printf("\n%d / %d is %.3f", a, b, c);
	return 0;
}