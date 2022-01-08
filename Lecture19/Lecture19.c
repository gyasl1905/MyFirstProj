//명백한 상수들
#include <stdio.h>
#include <limits.h> //INT_MAX, ...., etc.(매크로의 개념)
#include <float.h>	//FLT_MAX. ...., etc.

#define PI 3.141592 // manifest constants, symbolic constants

int main()
{
	printf("PI is %f\n", PI);
	printf("Biggest int: %d\n", INT_MAX);
	printf("One byte in this system is %d bits\n", CHAR_BIT);
	printf("Smallest normal float %e\n", FLT_MIN);
	
	//주의사항 : 위에 것들은 변수가 아니고 지정된 라이브러리에서 가지고 오는 형식입니다.
	return 0;
}