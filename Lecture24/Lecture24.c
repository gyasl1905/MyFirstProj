//�ݺ� loop
#include <stdio.h>

int main()
{
	int n = 1; // while �ʱ�����
/*
label:
	printf("%d\n", n);
	n = n + 1;

	if (n == 10) goto out;

	goto label;

out:
*/
	while (n < 3) // 2��° ����
	{
		printf("%d\n", n);
		n = n + 1; // 2��° ������ ���ϴ� ����
	}


	return 0;
}