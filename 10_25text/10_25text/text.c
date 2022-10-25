#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>

//int main(void)
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		sleep(100)
//	}
//	// 9 8 7 6 5 4 3 2 1 0 2^32-1 .....死循环
//
//	return 0;
//
//}

//int main(void)
//{
//	char a[1000];
//	for (int i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	// char -128~127  -128-1 = 127 
//	// 255
//
//	return 0;
//}

int main(void)
{
	int n = 9;
	//00000000 00000000 00000000 00001001

	float* pFloat = (float*)&n;

	printf("%d\n", n);
	printf("%f\n", *pFloat);
	//将整型看成浮点型的存储方式（00000000 00000000 00000000 00001001）
	
	*pFloat = 9.0;
	//1001.0
	//1.001 *2^3
	//(-1)^0 * 1.001 * 2^3
	//0  10000010 00100000000000000000000


	printf("%d\n", n);
	//将存入float的看成整型 (0  10000010 00100000000000000000000)
	printf("%f\n", *pFloat);

	return 0;
}

