#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. ջ����ʹ��
//2. �ַ����������Ż�
//3. strlen()���Ż�

////1.ջ����Ĭ��ʹ�ã�
////��ʹ�øߵ�ַ
////��ʹ�õ͵�ַ
////2.�����������±�����
////��ַ�ɵ͵��߱仯
//
////���������ѭ������Ϊ����arr[i]�ĵ�ַ��������i�ĵ�ַ��ͬ
////����arr[i] = 0ʱ ��ͬ�� i = 0 �Ӷ���ѭ��
//int main(void)
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	/*for (i = 0; i <= 12; i++)
//	{
//		printf("hh\n");
//		arr[i] = 0;
//	}*/
//	return 0;
//}


//ʵ���ַ�������
//������
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src; //'\0'
//}

//�м���
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//�߼���
//
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{	
//	assert(dest != NULL);//���� �ж�Ϊ�ٻᱨ��
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//�ַ��������ռ���
//#include<assert.h>
//void my_strcpy(char* dest, const char* src)//src�Ǹ��Ƿ�����const��ֹλ�ô���
//{
//	assert(dest != NULL);//���� �ж�Ϊ�ٻᱨ��
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//�������ַ�������

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)//src�Ǹ��Ƿ�����const��ֹλ�ô���
//{
//	char* ret = dest;
//	assert(dest != NULL);//���� �ж�Ϊ�ٻᱨ��
//	assert(src != NULL);//����
//	///��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main(void)
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "#################";
//	char arr2[] = "biet";
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//��дstrlen()
//������
#include<assert.h>

int my_strlen(char* arr)
{
	int count = 0;
	assert(arr != NULL);

	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}

int main(void)
{
	char arr[] = "abcdef";
	
	int x = 0;
	

	printf("%d",my_strlen(arr));


	return 0;

}

//