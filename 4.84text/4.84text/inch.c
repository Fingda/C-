/*	��ʾ�û�������ߣ����ף�������
	�����ʽ�� Dabney, you are 170.00 cm
	��float����/������
*/
#include<stdio.h>
#define in 0.39370
int main(void)
{
	float tall;
	char name[15];

	printf("Please input your height:\n");
	scanf_s("%f", &tall);
	printf("Please input your name:\n");
	scanf_s("%s", &name, 40);
	tall = tall * in;
	printf("%s, you are %2.2f in", name, tall);

	return 0;
}