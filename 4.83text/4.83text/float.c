/*	a.����21.3��2.1e+001
	b.����21.290��2.129E+001
*/
#include<stdio.h>
int main(void)
{
	float text;

	printf("Please input a float number");
	scanf_s("%f", &text);
	printf("You input number: %f\n", text);
	printf("You input number: %E\n", text);

	return 0;
}