//������ �����÷ο�

#include <stdio.h>
#include <limits.h> //�ڷ��� ���� ū ���� �������� �˷��ش�.
#include <stdlib.h>

int main()
{
//0b:���ͷ��� 2������� ��, ������ 10�����̴�.
//�޸� ������ �ʰ��� ���� �����÷ο��̴�.
//unsigned�� ���� ���� ���� 0�̴�.
	
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;
	unsigned int overflo = UINT_MAX;//�����÷� �߻� Ȯ���� ������ ���� ���� �ڵ�

	printf("max of uint =%u\n", u_max);
	printf("min of uint =%u\n", u_min);
	printf("max of int =%d\n", i_max);
	printf("min of int =%d\n", i_min);
	
	printf("%u", overflo);

	//i to binare representation
	//10������ 2������ ��ȯ�ϴ� ���α׷�(�����!)
	char buffer[33];
	_itoa(overflo, buffer, 2);

	//print decima and binary
	printf("decima: %u\n", overflo);
	printf("binary: %s\n", buffer);

	return 0;
	
}