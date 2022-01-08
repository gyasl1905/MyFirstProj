//문자열이 메모리에 저장되는 구조
#include <stdio.h>

int main()
{
	//int a = 1;
	//int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	//printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);//index를 입력
	
	//printf("%i\n", int_arr[10000]);

	char c = 'a';
	char str1[10] = "Hello"; //null character 포함
	char str2[10] = { 'H', 'i' };

	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);

	printf("%hhi %hhi %hhi %hhi %hhi\n",
		str2[0], str2[1], str2[2], str2[3], str2[4]);

	//char str3[10] = "Hello, World"; //array size is not enough
	char str3[20] = "Hello, \0World"; //null포인트를 만나서 뒤에 값이 소멸
	printf("%s\n", str3);
	printf("%hhd\n", str3[10]);//실제로 메모리엔 저장이 되있음



	return 0;
}