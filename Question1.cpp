#include <stdio.h>
#include "Question1.h"

//Hello World
void baekjoon2557()
{
	printf("Hello World!");
}

//We love kriii
void baekjoon10718()
{
#if 0
	for (int i = 0; i < 2; i++)
		printf("강한친구 대한육군\n");
#else
	printf("강한친구 대한육군\n");
	printf("강한친구 대한육군\n");
#endif
}

//고양이
void baekjoon10171()
{
	printf("\\    /\\\n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|\n");
}

//개
void baekjoon10172()
{
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|\n");
}

//A+B
void baekjoon1000()
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a + b);
}

//A-B
void baekjoon1001()
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a - b);
}

//A*B
void baekjoon10998()
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a * b);
}

//A/B
void baekjoon1008()
{
	double a;
	double b;

	scanf("%lf", &a);
	scanf("%lf", &b);

	printf("%.9lf\n", a / b);
}

//사칙연산
void baekjoon10869()
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
}

//나머지
void baekjoon10430()
{
	int a;
	int b;
	int c;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("%d\n", (a + b) % c);
	printf("%d\n", ((a % c) + (b % c)) % c);
	printf("%d\n", (a * b) % c);
	printf("%d\n", ((a % c) * (b % c)) % c);
}

//곱셈
void baekjoon2588()
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b / 10) % 10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);
}
