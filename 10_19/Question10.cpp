#include "Question10.h"
#include<stdio.h>

//팩토리얼
int factorial(int n)
{
	if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;

}
void baekjoon10872()
{
	int n;
	scanf("%d", &n);

	printf("%d\n", factorial(n));
}

//피보나치 수 5
int fibonacci(int n)
{
	if (n > 1)
		return fibonacci(n - 1) + fibonacci(n - 2);
	else
		return n;
}
void baekjoon10870()
{
	int n;
	scanf("%d", &n);

	printf("%d\n", fibonacci(n));
}

//별 찍기 - 10
void star(int i, int j, int n)
{
	if ((i / n) % 3 == 1 &&
		(j / n) % 3 == 1)
		printf(" ");
	else
	{
		if (n / 3 == 0)
			printf("*");
		else
			star(i, j, n / 3);
	}
}
void baekjoon2447()
{
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			star(i, j, n);
		printf("\n");
	}
}

//하노이 탑 이동 순서
void tower(int start, int mid, int end, int n)
{
	if (n == 1)
		printf("%d %d\n", start, end);
	else
	{
		tower(start, end, mid, n - 1);
		printf("%d %d\n", start, end);
		tower(mid, start, end, n - 1);
	}
}
void baekjoon11729()
{
	int n;
	scanf("%d", &n);
	int count = 1;

	for (int i = 0; i < n; i++)
		count *= 2;
	count--;
	printf("%d\n", count);
	
	tower(1, 2, 3, n);
}
