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

	// pfArr 是一个函数指针数组 -- 转移表
	int (*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };


	do {

		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		
		if (input >= 1 && input <= 5)
		{ 
			printf("请输入两个值:>\n");
			scanf("%d%d", &x, &y);
			printf("%d\n", pfArr[input](x, y));
		}
			
		else if (input == 0)
		{
			printf("退出\n");
			break;
		}
		
		else
		{ 
			printf("选择错误\n");
		}
			
	} while (input);
	


	return 0;
}