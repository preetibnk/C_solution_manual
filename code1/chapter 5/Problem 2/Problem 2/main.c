/*
Author :Preeti Benake

Problem Description:

Write a program to generate and display a table of n and n2, for integer values of n
ranging from 1 to 10. Be certain to print appropriate column headings.

*/

#include<stdio.h>
#include<math.h>

int main() {

	int n;
	printf("n \t n^2 \n");
	printf("---------------------\n");

	for (int i = 1; i < 11; i++) {
		n = pow(i, 2);
		printf("%d \t %d\n", i, n);
	}
	return 0;
}