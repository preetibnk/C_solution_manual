/*
Author :  Preeti Benake

Problem Description:
Write a program that calculates the sum of the digits of an integer. For example,
the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.The program
should accept any arbitrary integer typed in by the user.

*/

#include<stdio.h>
#include<math.h>

int main() {

	int n, sum = 0, q;
	
	printf("Enter the number : ");
	scanf("%d", &n);
	while (n != 0) {
		q = n % 10;
		sum = sum + q;
		n = n / 10;
		
		printf("\n %d", q);
		
	}
	
	printf("\n\nThe sum of all the digits of the number is %d\n\n", sum);
	return 0;
}