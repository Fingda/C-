//��ʾ�û����������գ�Ȼ���ԡ������ա���ʽ��ӡ����
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