/*	��дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��
	һ��float���͵ı�������Ϊ1.0/3.0���ֱ���ʾ���μ���
	�Ľ����3�Σ�һ����ʾС�������6λ���֣�һ����ʾС��
	�����12λ���֣�һ����ʾС�������16λ���֡�������Ҫ
	����float.hͷ�ļ�������ʾFLT DIG��DBL DIG��ֵ��
	1.0/3.0��ֵ����Щֵһ����
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