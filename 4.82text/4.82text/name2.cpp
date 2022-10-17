/* 
	提示用户输入名和姓
	a.打印名和姓，包括双引号；
	b.在宽度为20的字段右端打印名和姓，包括双引号；
	c.在宽度为20的字段左端打印名和姓，包括双引号；
	d.在比姓名宽度宽3的字段中打印名和姓.
*/
#include<stdio.h>
#include<string.h>
int main(void)
{
	int len = 0;
	char name[20];

	printf("Please write your name :");
	scanf_s("%19s", &name, 20);
	
	
	len = strlen(name);

	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("%*s\n", len+3, name);

	return 0;
}