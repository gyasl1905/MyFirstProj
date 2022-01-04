#include <stdio.h>

int main()
{
	int num_apples;//숫자는 앞에 쓸 수 없음,앞에 언더스코어는 가능
	int my_love;// 대문자 소문자를 구분함
	int house;// 한 영역안에 같은 이름을 가진 변수가 있으면 안됨
	int cracker;//띄어쓰기는 금지 특수기호도 금지

	int x, y, z; // declaration(변수 선언)

	x = 1; // assignment(변수 대입)
	y = 2;

	int sum = x + y;

	printf("%i + %i= %i.",x,y,sum);
	printf("\a"); //콘솔 창에서 소리나옴
	

	return 0;
}