#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//求二进制中不同位的个数
//2个int整型和n的二进制表达中，有多少位bit不同
//输入 1999  2299
//输出  7
//int  Binary(unsigned int n)
//{
//	int sum = 0;
//	int y;
//	int x = 1;
//	while (n)
//	{
//		y = n % 2;
//		sum += x * y;
//		x *= 10;
//		n /= 2;
//	}
//	return sum;
//}
//
//int compare(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	int arr1[32] = { 0 };
//	int arr2[32] = { 0 };
//
//	
//	for (i = 0; i < 32; i++)
//	{
//		arr1[i] = a % 2;
//		arr2[i] = b % 2;
//		if (arr1[i] == arr2[i])
//		{
//			count++;
//		}
//		a /= 2;
//		b /= 2;
//		if (a == 0 || b == 0)
//			break;
//
//	}
//	return count;
//}
//
//
//
//int main(void)
//{
//	int a, b;
//	int count;
//
//
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//
//	a = Binary(a); //转化为二进制
//	b = Binary(b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	count = compare(a, b); //比较二进制
//	printf("二进制不同位数的个数为%d", count);
//
//	return 0;
//}


//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);				//n = n & (n - 1)
//		count++;						//举例 13
//	}
//	return count;						//1101  n
//										//1100  n-1
//										//1100  n
//										//1011  n-1
//										//1000  n
//										//0111  n-1
//										//0000  n
//}
//int main(void)
//{
//	//计算一个数在二进制下1的个数
//	int n = 0;
//	int count = 0;
//
//	scanf("%d", &n);
//
//	count = count_bit_one(n);
//	printf("count = %d", count);
//	
//	return 0;
//}
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;//^相同为1不同为0
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//
//int main(void)
//{
//	//求二进制中不同位的个数
//	//2个int整型和n的二进制表达中，有多少位bit不同
//	//输入 1999  2299
//	//输出  7
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d", count);
//
//	return 0;
//}

void print(int m)
{
	int i = 0;
	printf("奇数位:\n");
	for(i = 30; i >= 0; i-=2)
	{
		printf("%d ", ((m >> i) & 1));
	}
	printf("\n");
	printf("偶数位:\n");
	for(i = 31; i >= 1; i-= 2)
	{
		printf("%d ", ((m >> i) & 1));
	}
}


int main(void)
{
	//分别打印出二进制的奇数位和偶数位
	int m = 0;
	scanf("%d", &m);
	print(m);
	
	return 0;
}