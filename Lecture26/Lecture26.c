// ���� ��� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	double seedMoney, targetMoney, annual;

	printf("Input seedMoney : ");
	scanf("%lf", &seedMoney);

	printf("Input targetMoney : ");
	scanf("%lf", &targetMoney);

	printf("Input annual : ");
	scanf("%lf", &annual);

	double fund = seedMoney; // �ʱⰪ�� �����ؿ��� ���� ����!
	int year_count = 0;

	while (fund < targetMoney)
	{
		fund += fund * annual / 100.0;
		year_count = year_count + 1;

		printf("Year %d, fund %f\n", year_count, fund);
	}

	printf("It take %d years\n", year_count);

	return 0;
}