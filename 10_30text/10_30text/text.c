#define _CRT_SECURE_NO_WARNINGS 1

//1.дһ������ָ�� pf���ܹ�ָ��my_strcopy
//2.дһ������ָ������ pfArr, �ܹ����4��my_strcopy�����ĵ�ַ
#include<stdio.h>
//
//char *my_strcopy(char *dest, const char *src)
//{
//	if (src != '\0')
//		*dest = *src +1;
//	return dest;
//	
//}
//
//int main(void)
//{
//
//	char* (*pf)(char*, const char*) = my_strcopy;
//	char* (*pfArr[4])(char*, const char*) = my_strcopy;
//
//	
//	
//	return 0;
//}

//int main(void)
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = arr;	//ȡ������ĵ�ַ
//
//	int (*pfArr[4])(int, int);
//
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr ��һ��ָ��[����ָ������]��ָ��
//	//ppfArr ��һ������ָ�� ��ָ��ָ���������4��Ԫ��
//	//ÿ��Ԫ�ص������Ǻ���ָ�룬int(*)(int, int)
//
//	return 0;
//}


int main(void)
{
	int a = 0;
	void* p = &a;
//void*���͵�ָ�룬���Խ����������͵ĵ�ַ
//void*���͵�ָ�룬���ܽ��н����ò���
//void*���͵�ָ�룬���ܽ��мӼ������Ĳ���


	return 0;
}