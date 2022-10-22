#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. 栈区的使用
//2. 字符串拷贝的优化
//3. strlen()的优化

////1.栈区的默认使用：
////先使用高地址
////再使用低地址
////2.数组是随着下标增长
////地址由低到高变化
//
////程序进入死循环是因为数组arr[i]的地址增长到与i的地址相同
////导致arr[i] = 0时 等同于 i = 0 从而死循环
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


//实现字符串拷贝
//初级版
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

//中级版
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//高级版
//
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{	
//	assert(dest != NULL);//断言 判断为假会报错
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//字符串拷贝终极版
//#include<assert.h>
//void my_strcpy(char* dest, const char* src)//src是覆盖方，加const防止位置错误
//{
//	assert(dest != NULL);//断言 判断为假会报错
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//究极版字符串拷贝

//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)//src是覆盖方，加const防止位置错误
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言 判断为假会报错
//	assert(src != NULL);//断言
//	///把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main(void)
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#################";
//	char arr2[] = "biet";
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}


//自写strlen()
//究极版
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