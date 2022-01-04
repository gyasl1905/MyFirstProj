//정수의 오버플로우

#include <stdio.h>
#include <limits.h> //자료의 가장 큰 값과 작은값을 알려준다.
#include <stdlib.h>

int main()
{
//0b:리터럴이 2진수라는 뜻, 없으면 10진수이다.
//메모리 범위를 초과한 것이 오버플로우이다.
//unsigned의 가장 작은 값은 0이다.
	
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;
	unsigned int overflo = UINT_MAX;//오버플로 발생 확인을 눈으로 보기 위한 코드

	printf("max of uint =%u\n", u_max);
	printf("min of uint =%u\n", u_min);
	printf("max of int =%d\n", i_max);
	printf("min of int =%d\n", i_min);
	
	printf("%u", overflo);

	//i to binare representation
	//10진수를 2진수로 변환하는 프로그램(재밌음!)
	char buffer[33];
	_itoa(overflo, buffer, 2);

	//print decima and binary
	printf("decima: %u\n", overflo);
	printf("binary: %s\n", buffer);

	return 0;
	
}