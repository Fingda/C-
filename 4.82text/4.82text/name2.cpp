/* 
	��ʾ�û�����������
	a.��ӡ�����գ�����˫���ţ�
	b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ�����˫���ţ�
	c.�ڿ��Ϊ20���ֶ���˴�ӡ�����գ�����˫���ţ�
	d.�ڱ�������ȿ�3���ֶ��д�ӡ������.
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