#include <stdio.h>
#include "Question2.h"

//두 수 비교하기
void baekjoon1330()
{
	int a;
	int b;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a < b)
		printf("<");
	else if (a > b)
		printf(">");
	else
		printf("==");
}

//시험 성적
void baekjoon9498()
{
	int a;

	scanf("%d", &a);

	if (a > 89)
		printf("A");
	else if (a > 79)
		printf("B");
	else if (a > 69)
		printf("C");
	else if (a > 59)
		printf("D");
	else
		printf("F");
}

//윤년
void baekjoon2753()
{
	int a;
	
	scanf("%d", &a);

	if (a % 400 == 0)
		printf("1");
	else if (a % 4 == 0 && a % 100 != 0)
		printf("1");
	else
		printf("0");
}

//사분면 고르기
void baekjoon14681()
{
	int x;
	int y;

	scanf("%d", &x);
	scanf("%d", &y);

	if		(x > 0 && y > 0)	printf("1");
	else if (x < 0 && y > 0)	printf("2");
	else if (x < 0 && y < 0)	printf("3");
	else if (x > 0 && y < 0)	printf("4");
}

//알람 시계
void baekjoon2884()
{
	int hour;
	int minute;

	scanf("%d", &hour);
	scanf("%d", &minute);

	minute -= 45;
	
	if (minute < 0)
	{
		minute += 60;
		
		hour -= 1;

		if (hour < 0)
			hour = 23;
	}

	printf("%d %d", hour, minute);
}
