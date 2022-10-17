//提示用户输入名和姓，然后以“名，姓”格式打印出来
#include<stdio.h>
int main(void)
{
	char fname[40], lname[40];

	printf("Please write your first name :");
	scanf_s("%s", &fname, 40);
	printf("Please write your last name :");
	scanf_s("%s", &lname, 40);
	printf("Hello,%s %s", fname, lname);

	return 0;
}