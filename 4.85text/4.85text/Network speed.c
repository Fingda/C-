/*	��дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶ�
	�������ֽڣ�MB��Ϊ��λ���ļ���С��������Ӧ�����ļ�������ʱ�䡣
	ע�⣬����1�ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ���š��ó���
	Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩��
	��ʾС���������λ���֣�
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