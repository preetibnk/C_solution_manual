/*
Author : Preeti Benake

Problem Description:
Write a program that asks the user to type in two integer values at the terminal.
Test these two numbers to determine if the first is evenly divisible by the second,
and then display an appropriate message at the terminal.

*/

#include<stdio.h>

int main() {

	int a, b;
	printf("enter two numbers a and b : ");
	scanf("%d %d", &a, &b);
	if ((a/b) % 2 == 0)
	{
		printf("\na is evenly divisible by b\n");
	}
	else
		printf("\n a is not evenly divisible by b\n");

	return 0;
}