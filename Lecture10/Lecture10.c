//�ε��Ҽ����� �Ѱ�

#include <stdio.h>
#include <float.h>

int main()
{
	//round-off errors (ex1):���е� ����
		float a, b;
		a = 1.0E20f + 1.0f;
		b = a - 1.0E20f;
		printf("%f\n", b);

	//round-off errors (ex2)
	//�ε��Ҽ��� ��Ŀ����� ������ ������ �˴ϴ�.

		/*/float a = 0.0f;
		a = a + 0.01f;*/ //��� ���� �� ������ ������ �� ����� ��Ȯ�����ʽ��ϴ�.

	//overflow(float�ѹ��� ���е� ������ 6���Դϴ�.)
		float max = 3.402823466e+38F;
		printf("%f\n", max);
		max = max * 100.0f;

		printf("%f\n", max); //inf�� �߻��մϴ�(���ڸ� �� �� ���� ����)
	
	//underflow

		float f = 1.401298464e-45F;
		printf("%e\n", f);
		f = f / 2.0f; //subnormal: float���� ���е��� �Ҿ���� ����� ǥ���Դϴ�.
		printf("%e\n", f);

		/*
		float f = asinf(1.0f);
		printf("%f\n", f);

		f = asinf(2.0f);
		printf("%f\n", f);
		*/


	return 0;
}