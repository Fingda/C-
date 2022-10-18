/*	编写一个程序，提示用户输入旅行的里程和消耗的汽油量。
	然后计算并显示消耗每加仑汽油行驶的英里数，显示小数
	点后面一位数字。接下来，使用1加仑大约3.785升，1英
	里大约为1.609千米，把单位是英里/加仑的值转换为升/
	100公里（欧洲通用的燃料消耗表示法），并显示结果，显
	示小数点后面1位数字。注意，美国采用的方案测量消耗单
	位燃料的行程（值越大越好），而欧洲则采用单位距离消耗
	的燃料测量方案（值越低越好）。使用#define创建符号常
	量或使用const限定符创建变量来表示两个转换系数。
	*/
#include<stdio.h>
#define gallon 3.785
#define mile 1.609
int main(void)
{
	float mileage, gasoline;

	printf("Please input the range you traveled(in mile):");
	scanf_s("%f", &mileage);
	printf("Please input the range you spend(in gallon):");
	scanf_s("%f", &gasoline);

	printf("Fuel consumptions:\n");
	printf("In USA, you oil wear is %.1f mile/gallon.\n", mileage / gasoline);
	printf("In Europe, you oil wear is:");
	printf("%.1f litre/100km.\n", (gasoline * gallon) / (mileage * mile));

	return 0;

}