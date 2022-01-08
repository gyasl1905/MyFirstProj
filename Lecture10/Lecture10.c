//부동소수점의 한계

#include <stdio.h>
#include <float.h>

int main()
{
	//round-off errors (ex1):정밀도 오류
		float a, b;
		a = 1.0E20f + 1.0f;
		b = a - 1.0E20f;
		printf("%f\n", b);

	//round-off errors (ex2)
	//부동소수점 방식에서는 오차가 누적이 됩니다.

		/*/float a = 0.0f;
		a = a + 0.01f;*/ //계산 했을 시 오차가 누적이 돼 계산이 정확하지않습니다.

	//overflow(float넘버의 정밀도 보장은 6개입니다.)
		float max = 3.402823466e+38F;
		printf("%f\n", max);
		max = max * 100.0f;

		printf("%f\n", max); //inf가 발생합니다(숫자를 알 수 없는 상태)
	
	//underflow

		float f = 1.401298464e-45F;
		printf("%e\n", f);
		f = f / 2.0f; //subnormal: float형의 정밀도를 잃어버린 경우의 표현입니다.
		printf("%e\n", f);

		/*
		float f = asinf(1.0f);
		printf("%f\n", f);

		f = asinf(2.0f);
		printf("%f\n", f);
		*/


	return 0;
}