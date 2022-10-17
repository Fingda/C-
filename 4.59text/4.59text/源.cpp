#include<stdio.h>
int main(void)
{
//a
	int num;

	scanf_s("%d", &num);
	printf("%d", num);


//b
	float dnum;
	float eum;
	
	scanf_s("%f %e", &dnum, &eum);
	printf("%f %e", dnum, eum);


//c
	char sign[30];

	scanf_s("%s", &sign, 30);
	printf("%s", sign);


//d
	char catc[30];
	int ber;

	scanf_s("%s %d");
	printf("%c %d", catc, ber);


//e
	
	int ber;

	scanf_s("%*s %d", &ber);
	printf("%*s %d", ber);

	return 0;
}
