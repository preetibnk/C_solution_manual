/*
Author :PReeti Benake

Problem Description:
7. Write a program that evaluates the following expression and displays the results
(remember to use exponential format to display the result):
(3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)

8. To round off an integer i to the next largest even multiple of another integer j,
the following formula can be used:
Next_multiple = i + j - i % j
For example, to round off 256 days to the next largest number of days evenly
divisible by a week, values of i = 256 and j = 7 can be substituted into the preceding
formula as follows:
Next_multiple = 256 + 7 - 256 % 7
= 256 + 7 - 4
= 259
Write a program to find the next largest even multiple for the following values of
i and j:
i j
365 7
12,258 23
996 4
*/

#include<stdio.h>
#include<math.h>

int main() {

	int i, j, ans;
	printf("enter the value for i and j : ");
	scanf("%d %d", &i, &j);

	ans = i + j - i % j;
	printf("The next largest integer is %d: ", ans);
	return 0;
}