/*	编写一个程序，先提示用户输入名，然后提示用户输入姓。
	在一行打印用户输入的名和姓，下一行分别打印名和姓的字
	母数。字母数要与相应名和姓的结尾对齐，如下所示：
	Melissa Honeybee
		  7	       8
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	char fname[15];
	char lname[15];
	int lenf = {0};
	int lenl = {0};

	printf("Please write your first name:\n");
	scanf_s("%s", &fname, 15);
	printf("Please write your last name:\n");
	scanf_s("%s", &lname, 15);

	lenf = strlen(fname);
	lenl = strlen(lname);

	printf("%s %s\n", fname, lname);
	printf("%*d %*d", lenf, lenf, lenl, lenl);

	return 0;

}