//��ȣ�� ����� ��ó����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f //��ȣ�� ����� ����
#define AI_NAME "Friday" //��ȣ�� ����� �� ���� �� define�� ����� �ʿ�� ����.
//���� define���� const�� ����ϴ� ���� �����մϴ�. 
int main()
{
	float radius, area, circum;

	printf("I'm %s\n", AI_NAME);
	printf("Please, Input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius; // area = pi*r*r
	circum = 2.0 * PI * radius; // circum = 2.0*pi*r
	
	// sphere area, sphere volume .....

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);
	
	return 0;
}