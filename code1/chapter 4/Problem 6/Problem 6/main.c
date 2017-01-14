/*
Author: Preeti Benake

Problem Description: 
Write a program to evaluate the polynomial shown here:
3x3 - 5x2 + 6
for x = 2.55.

*/


#include<stdio.h>
#include<math.h>

int main() {

	float x = 0.0, ans=0;

	printf("Enter the value for x used to evaluate the expression 3x^3 - 5x^2 + 6 : ");
	scanf("%f", &x);

	ans = ((3 * pow(x, 3)) - (5 * pow(x, 2)) + 6);

	printf("The answer for %.2f value of x is %.2f", x, ans);

	return 0;
}