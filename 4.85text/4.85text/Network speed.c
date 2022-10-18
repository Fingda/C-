/*	编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度
	和以兆字节（MB）为单位的文件大小。程序中应计算文件的下载时间。
	注意，这里1字节等于8位。使用float类型，并用/作为除号。该程序
	要以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），
	显示小数点后面两位数字：
	At 18.12 megabits per second, a file of 2.20 megabytes
	downloads in 0.97 seconds.
	*/
#include<stdio.h>
int main(void)
{
	float speed;
	float size;
	float time;

	printf("Please input your Download speed:\n");
	scanf_s("%f", &speed);
	printf("Please input your Download size:\n");
	scanf_s("%f", &size);
	time = size / speed;
	printf("At %2.2f megabits per second, a file of %2.2f megabytes\
downloads in %2.2f seconds", speed, size, time);

	return 0;
}