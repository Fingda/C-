#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



//��������в�ͬλ�ĸ���
//2��int���ͺ�n�Ķ����Ʊ���У��ж���λbit��ͬ
//���� 1999  2299
//���  7
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
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//
//	a = Binary(a); //ת��Ϊ������
//	b = Binary(b);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	count = compare(a, b); //�Ƚ϶�����
//	printf("�����Ʋ�ͬλ���ĸ���Ϊ%d", count);
//
//	return 0;
//}


//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);				//n = n & (n - 1)
//		count++;						//���� 13
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
//	//����һ�����ڶ�������1�ĸ���
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
//	int tmp = m ^ n;//^��ͬΪ1��ͬΪ0
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
//	//��������в�ͬλ�ĸ���
//	//2��int���ͺ�n�Ķ����Ʊ���У��ж���λbit��ͬ
//	//���� 1999  2299
//	//���  7
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
	printf("����λ:\n");
	for(i = 30; i >= 0; i-=2)
	{
		printf("%d ", ((m >> i) & 1));
	}
	printf("\n");
	printf("ż��λ:\n");
	for(i = 31; i >= 1; i-= 2)
	{
		printf("%d ", ((m >> i) & 1));
	}
}


int main(void)
{
	//�ֱ��ӡ�������Ƶ�����λ��ż��λ
	int m = 0;
	scanf("%d", &m);
	print(m);
	
	return 0;
}