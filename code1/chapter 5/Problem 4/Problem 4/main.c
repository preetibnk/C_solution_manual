/*
Author :Preeti Benake

Problem Description:
The factorial of an integer n, written n!, is the product of the consecutive integers
1 through n. For example, 5 factorial is calculated as
5! = 5 x 4 x 3 x 2 x 1 = 120
Write a program to generate and print a table of the first 10 factorials.

*/

#include<stdio.h>
#include<math.h>

int main() {

	int n=1;

	printf("n \t factorial of n \n");
	printf("-----------------------\n");

	for (int i = 1; i < 11; i++) {
		n = n*i;
		printf("%d \t %d \n", i, n);
	}
	return 0;
}