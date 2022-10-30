#define _CRT_SECURE_NO_WARNINGS 1

//1.写一个函数指针 pf，能够指向my_strcopy
//2.写一个函数指针数组 pfArr, 能够存放4个my_strcopy函数的地址
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
//	int(*p)[10] = arr;	//取出数组的地址
//
//	int (*pfArr[4])(int, int);
//
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr 是一个指向[函数指针数组]的指针
//	//ppfArr 是一个数组指针 ，指针指向的数组有4个元素
//	//每个元素的类型是函数指针，int(*)(int, int)
//
//	return 0;
//}


int main(void)
{
	int a = 0;
	void* p = &a;
//void*类型的指针，可以接收任意类型的地址
//void*类型的指针，不能进行解引用操作
//void*类型的指针，不能进行加减整数的操作


	return 0;
}