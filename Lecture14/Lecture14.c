//���ڿ� ������ϱ�.
#include <stdio.h>

int main() 
{
	char fruit_name[40]; //stores only one character.
	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name); //be careful with &,(%c�� ����Դϴ�.)

	printf("You like %s!\n", fruit_name);// �迭�� �νĵ˴ϴ�.

	return 0;
}