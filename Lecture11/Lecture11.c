//문자형

#include <stdio.h>

int main()
{
	char c = 'A';
	char d = '*';
	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	printf("%c \n", c + 1);

	char a = '\a';//bell scape, \7과 동일합니다.
	printf("%c\n", a);//콘솔창에서 소리가 나옵니다.

	float salary;
	printf("$______\b\b\b\b\b\b");
	scanf("%f\n", &salary);

	printf("AB\tCDEF\n");
	printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"Hello\"\?\n");
	return 0;
}