#include <stdio.h>
#include "Question4.h"

//A+B-5
void baekjoon10952()
{
	while (1)
	{
		int a;
		int b;

		scanf("%d", &a);
		scanf("%d", &b);
		
		printf("%d\n", a + b);
	}
}

//A+B-4
void baekjoon10951()
{
	int a, b;
#if 1
	while (scanf("%d %d", &a, &b) == 2)
		printf("%d\n", a + b);
#elif 0
	while (scanf("%d", &a) == 1)
	{
		scanf("%d", &b);
		printf("%d\n", a + b);
	}
#elif 0
	while (scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a + b);
#endif
}

//더하기 사이클
void baekjoon1110()
{
	int n, tmp, num = 0;
	scanf("%d", &n);
	tmp = n;

	while (1)
	{
		int a, b, c;
		
		if (n < 10)
			a = 0;
		else
			a = n / 10;
		b = n % 10;
		
		c = a + b;
		if (c > 9)
			c %= 10;


		n = (b * 10) + c;

		num++;

		if (tmp == n)
			break;
	}

	printf("%d", num);
}
