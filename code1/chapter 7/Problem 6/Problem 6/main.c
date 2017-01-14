/*
Author : Preeti Benake

Problem Description:
You don’t need to use an array to generate Fibonacci numbers.You can simply use
three variables: two to store the previous two Fibonacci numbers and one to store
the current one. Rewrite Program 7.3 so that arrays are not used. Because you’re
no longer using an array, you need to display each Fibonacci number as you generate
it.

*/

#include<stdio.h>
#include<math.h>

int main() {

	int first = 1, second = 1, next, n;
	printf("Enter the number of fibonacci numbers you want : ");
	scanf("%d", &n);

	printf("\nThe fibonacci series is \n\n%d \t %d ", first, second);
	for (int i = 0; i < n; i++)
	{
		next = first + second; 
		first = second;
		second = next;
		
		printf("\t %d ", next);

	}
	printf("\n\n");

	return 0;
}
