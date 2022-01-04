//고정너비 정수

#include <stdio.h>
#include <stdint.h> //also included in inttypes.h
#include <inttypes.h>//인클루드 됐을 떄 stdint를 포함합니다. int의 포맷을 자동설정해주는 역할입니다.

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
	printf("me32 = %" PRId32 "\n", i32);	//PRId32= 매크로입니다, 뒤에 숫자 8 16 32 64에 따라 값이 바뀝니다.
	
	return 0;
}