//문자열 입출력하기.
#include <stdio.h>

int main() 
{
	char fruit_name[40]; //stores only one character.
	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name); //be careful with &,(%c일 경우입니다.)

	printf("You like %s!\n", fruit_name);// 배열로 인식됩니다.

	return 0;
}