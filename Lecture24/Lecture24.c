//반복 loop
#include <stdio.h>

int main()
{
	int n = 1; // while 초기조건
/*
label:
	printf("%d\n", n);
	n = n + 1;

	if (n == 10) goto out;

	goto label;

out:
*/
	while (n < 3) // 2번째 조건
	{
		printf("%d\n", n);
		n = n + 1; // 2번째 조건이 변하는 조건
	}


	return 0;
}