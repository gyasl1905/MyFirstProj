//증감연사자의 예시

#include <stdio.h>

int main()
{
	/*
	int a = 0;
	a++; // a=a+1 or a +=1;
	printf("%d\n", a);
	
	++a; // a= a+1 or a+=1;
	printf("%d\n", a);

	double b = 0;
	b++;
	printf("%f\n", b);

	++b;
	printf("%f\n", b);

	int count = 0;
	while (count < 10)// ++count or count++
	{
		printf("%d", ++count); // ++count or count++
		//count +=1;
	}
	*/

	/*
	int i = 3;
	int l = 2 * --i;
	printf("%d %d\n", i, l);

	i = 1;
	l = 2 * i--;
	printf("%d %d\n", i, l);
	*/

	/* very high precedence */
	int x, y, z;
	x = 3, y = 4;
	z = (x + y++) * 5;//(x+y)++ or x+(y++)
	printf("%d %d %d", x, y, z);

	/* ++ and -- affect modifiable values */
	int x = 1, y = 1, z;
	z = x * y++;// (x)*(y++), not (x*y)++
	//z = (x*y)++//error
	//z = 3++;//error

	/* Bad practices */
	int n = 1;
	printf("%dd", n, n * n++);
	int x = n / 2 + 5 * (1 + n++);
	int y = n++ + n++;


	return 0;
}