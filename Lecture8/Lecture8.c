//�����ʺ� ����

#include <stdio.h>
#include <stdint.h> //also included in inttypes.h
#include <inttypes.h>//��Ŭ��� ���� �� stdint�� �����մϴ�. int�� ������ �ڵ��������ִ� �����Դϴ�.

int main()
{
	int i;
	int32_t i32;		//32 bit integer
	int_least8_t i8;	//smallest 8 bit
	int_fast8_t f8;		//fastest minimum
	intmax_t imax;		//bigges signed integers
	uintmax_t uimax;	//biggest unsigned integers

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %d\n", i32);
	printf("me32 = %" PRId32 "\n", i32);	//PRId32= ��ũ���Դϴ�, �ڿ� ���� 8 16 32 64�� ���� ���� �ٲ�ϴ�.
	
	return 0;
}