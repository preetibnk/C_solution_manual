/*
Author: Preeti Benake

Problem Description :
Write a program that takes an integer keyed in from the terminal and reverses and extracts and
displays each digit of the integer in English. So, if the user types in 932, the program
should display
nine three two
Remember to display “zero” if the user types in just a 0. (Note: This exercise is a
hard one!)

*/

#include<stdio.h>
#include<math.h>

int main() {

	int a = 1, q = 0, n[100] = { 0 }, i = 0, j = 0;
	printf("Enter an integer : ");
	scanf("%d", &a);
	printf("\n\n");
	while (a != 0)
	{
		q = a % 10;

		switch (q) {
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("five ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			default:
				printf("\ninvalid input");
		}
		
		//n[i] = q;
		a = a / 10;
		//printf("%d", q);
		//i++;
	}

	/*for (j = 0; j <= i; j++) {
		printf("\n%d ", n[j]);
	}*/

	return 0;
}