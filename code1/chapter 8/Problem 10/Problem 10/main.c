/*
Author:Preeti Benake

Problem Description:
Write a function prime that returns 1 if its argument is a prime number and
returns 0 otherwise.

*/

#include<stdio.h>
#include<math.h>

int check_prime(int num);

int main() {

	int n,check;

	printf("Enter a number to check if it is a prime: ");
	scanf("%d", &n);

	check = check_prime(n);
	if (check == 1)
		printf("\n %d is prime");
	else
		printf("\n %d is not prime");

	return 0;
}


int check_prime(int num) {

	printf("\n\nentered check_prime");
	int q, ans;
	q = num / 2;
	for (int i = 0; i < q; i++)
	{
		if (num % i != 0)
			ans = 1;
		else
			ans = 2;
	}
	return ans;
}