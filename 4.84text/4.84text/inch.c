/*	提示用户输入身高（厘米）和姓名
	输出格式： Dabney, you are 170.00 cm
	用float，用/作除号
*/
#include<stdio.h>
#define in 0.39370
int main(void)
{
	float tall;
	char name[15];

	printf("Please input your height:\n");
	scanf_s("%f", &tall);
	printf("Please input your name:\n");
	scanf_s("%s", &name, 40);
	tall = tall * in;
	printf("%s, you are %2.2f in", name, tall);

	return 0;
}