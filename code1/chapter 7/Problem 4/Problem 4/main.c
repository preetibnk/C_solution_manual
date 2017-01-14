/*
Author: Preeti Benake

Problem Description :
Write a program that calculates the average of an array of 10 floating-point values

*/

#include<stdio.h>
#include<math.h>

int main() {

	float num[10],sum=0;
	int i;

	for (i = 0; i < 10; i++) {
		printf("\nEnter the %d number : ",i+1);
		scanf("%f", &num[i]);
	}

	for (i = 0; i < 10; i++) {
		//printf("\nThe number at %d is %f : ", i+1,num[i]);
		//scanf("%f", &num[i]);
		sum = sum + num[i];
	}
	printf("\n\nThe average of all the elements of array is %.3f ", (sum / 10));
	return 0;
}