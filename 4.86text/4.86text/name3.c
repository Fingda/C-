/*	��дһ����������ʾ�û���������Ȼ����ʾ�û������ա�
	��һ�д�ӡ�û�����������գ���һ�зֱ��ӡ�����յ���
	ĸ������ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
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