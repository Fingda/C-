/*	��дһ��������ʾ�û��������е���̺����ĵ���������
	Ȼ����㲢��ʾ����ÿ����������ʻ��Ӣ��������ʾС��
	�����һλ���֡���������ʹ��1���ش�Լ3.785����1Ӣ
	���ԼΪ1.609ǧ�ף��ѵ�λ��Ӣ��/���ص�ֵת��Ϊ��/
	100���ŷ��ͨ�õ�ȼ�����ı�ʾ����������ʾ�������
	ʾС�������1λ���֡�ע�⣬�������õķ����������ĵ�
	λȼ�ϵ��г̣�ֵԽ��Խ�ã�����ŷ������õ�λ��������
	��ȼ�ϲ���������ֵԽ��Խ�ã���ʹ��#define�������ų�
	����ʹ��const�޶���������������ʾ����ת��ϵ����
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