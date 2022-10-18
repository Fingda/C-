/*	编写一个程序，将一个double类型的变量设置为1.0/3.0，
	一个float类型的变量设置为1.0/3.0。分别显示两次计算
	的结果各3次：一次显示小数点后面6位数字：一次显示小数
	点后面12位数字：一次显示小数点后面16位数字。程序中要
	包含float.h头文件，并显示FLT DIG和DBL DIG的值。
	1.0/3.0的值与这些值一致吗？
*/
#include<stdio.h>
#include<float.h>
int main(void)
{
	double num = 1.0 / 3.0;
	float num2 = 1.0 / 3.0;

	printf("%2.6f %2.6f\n", num, num2);
	printf("%2.12f %2.12f\n", num, num2);
	printf("%2.16f %2.16f\n", num, num2);
	printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);


	return 0;
}