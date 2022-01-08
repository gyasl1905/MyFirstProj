//sizeof  연산자
#include <stdio.h>

struct Mystruct
{
	int i;
	float f;
};


int main()
{
	/* 1. sizeof basic types*/
	
	int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof (int);
	unsigned int int_size3 = sizeof (a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("Size of int type is %u bytes.\n", int_size1);
	printf("Size of int type is %zu bytes.\n", int_size4);
	printf("Size of int type is %zu bytes.\n", float_size);

	/* 2. size of arrays*/
	
	int int_arr[30]; // int_arr[0] = 1024, 주소개념으로 생각하는 것이 편리합니다.
	int* int_ptr = NULL;
	int_ptr = (int*)malloc(sizeof(int) * 30); // int_ptr[0]= 1024

	printf("Size of array = %zu bytes\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes\n", sizeof(int_ptr));
	

	/* 3. sizeof character array */ 

	char c = 'a';
	char string[10]; // maximally 9 character + '\0' ,실 배열의 수는 9이고 '\0'의 자리를 하나 포함시켜야합니다.

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char type is %zu bytes.\n", char_size);
	printf("Size of string type is %zu bytes\n", str_size);

	/* 4. size of structure */

	printf("%zu\n", sizeof(struct Mystruct));

}