//기호적 상수와 전처리기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592f //기호적 상수의 선언
#define AI_NAME "Friday" //기호적 상수를 쓸 떄는 꼭 define을 사용할 필요는 없다.
//요즘엔 define보단 const를 사용하는 것을 권장합니다. 
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