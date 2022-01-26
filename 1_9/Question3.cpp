#include <stdio.h>
#include "Question3.h"

//구구단
void baekjoon2739()
{
	int n;
	
	scanf("%d", &n);

	for (int i = 1; i < 10; i++)
		printf("%d * %d = %d\n", n, i, n * i);
}

//A+B-3
void baekjoon10950()
{
	int t, a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);


		printf("%d\n", a + b);
	}
}

//합
void baekjoon8393()
{
	int n, a = 0;
	
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++)
		a += i;
	
	printf("%d\n", a);
}

//빠른 A+B
void baekjoon15552()
{
	int t, a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);

		printf("%d\n", a + b);
	}
}

//N 찍기
void baekjoon2741()
{
	int t;

	scanf("%d", &t);

	for (int i = 1; i < t + 1; i++)
		printf("%d\n", i);
}

//기찍 N
void baekjoon2742()
{
	int t;

	scanf("%d", &t);

	for (int i = t; i > 0; i--)
		printf("%d\n", i);
}

//A+B-7
void baekjoon11021()
{
	int t, a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);

		printf("Case #%d: %d\n",i + 1 , a + b);
	}
}

//A+B-8
void baekjoon11022()
{
	int t, a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);

		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
}

//별 찍기-1
void baekjoon2438()
{
	int t;

	scanf("%d", &t);

	for (int i = 1; i < t + 1; i++)
	{
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

//별 찍기-2
void baekjoon2439()
{
	int t;

	scanf("%d", &t);

	for (int i = 1; i < t + 1; i++)
	{
		for (int k = t - i; k > 0; k--)
			printf(" ");

		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}

//X보다 작은 수
void baekjoon10871()
{
	int n, x, a;

	scanf("%d", &n);
	scanf("%d", &x);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);

		if (a < x)
			printf("%d ", a);
	}
}
