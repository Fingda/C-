#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void menu()
{
	printf("***************************\n");
	printf("****1.Add     2.Sub********\n");
	printf("****3.Mul     4.Div********\n");
	printf("*********0. exit***********\n");
	printf("***************************\n");
}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


int main(void)
{
	int input = 0;
	int x = 0;
	int y = 0;

	// pfArr ��һ������ָ������ -- ת�Ʊ�
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };


	do {

		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		
		if (input >= 1 && input <= 5)
		{ 
			printf("����������ֵ:>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", pfArr[input](x, y));
		}
			
		else if (input == 0)
		{
			printf("�˳�\n");
			break;
		}
		
		else
		{ 
			printf("ѡ�����\n");
		}
			
	} while (input);
	


	return 0;
}