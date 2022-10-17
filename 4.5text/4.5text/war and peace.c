#include<stdio.h>
#define BOOK "War and Peace"
int main(void)
{
	float cost = 12.99;
	float percent = 80.0;
	
	printf("This copy of \"%s\" sells for $%2.2f.\nThat is %2.0f%% of list.", 
		BOOK, cost, percent);

	return 0;
}