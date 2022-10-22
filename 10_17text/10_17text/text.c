#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>




typedef struct Stu
{
	char name[20];
	int age;
	char tele[20];
	char sex[6];
}Stu;



void Print1(Stu tmp)
{
	printf("name = %s\n", tmp.name);
	printf("age = %d\n", tmp.age);
	printf("tele = %s\n", tmp.tele);
	printf("sex = %s\n", tmp.sex);
}



void Print2(Stu* s)
{
	printf("name = %s\n", s->name);
	printf("age = %d\n", s->age);
	printf("tele = %s\n", s->tele);
	printf("sex = %s\n", s->sex);
}





int main(void)
{
	Stu s = { "уехЩ", 20, "1154215421", "дп" };
	Print1(s);
	Print2(&s);

	return 0;
}