//시간을 나눠주는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int seconds = 0, minutes = 0, hours = 0;

	printf("Input seconds :");
	scanf("%d", &seconds);

	minutes = seconds / 60;
	seconds %= 60;

	hours = minutes / 60;
	minutes %= 60;

	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
	printf("Good bye!");
	

	return 0;
}