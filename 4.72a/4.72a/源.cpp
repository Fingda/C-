#include<stdio.h>
#include<string.h>
#define B "booboo"
#define X 10
int main(void)
{
	int age ;
	char name [1];
	printf("Please enter your first name.");
	scanf_s("%s", &name, 1);
	printf("All right, %c, what's your age?\n", name);
	scanf_s("%d", &age);
	int xp = age + X;
	printf("That's a %s! You must be at least %d.\n", B, xp);
	
	return 0;

}