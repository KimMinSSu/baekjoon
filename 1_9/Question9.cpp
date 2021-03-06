#include "Question9.h"
#include <stdio.h>
#include <memory.h>

//소수 찾기
void baekjoon1978()
{
	int n;
	scanf("%d", &n);
	int count = 0;

	for (int k = 0; k < n; k++)
	{
		int num;
		scanf("%d", &num);
		bool check = true;

		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				check = false;
				break;
			}
		}

		if (num == 1)
			check = false;

		if (check == true)
			count++;
	}

	printf("%d\n", count);
}

//소수
void baekjoon2581()
{
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int num = n - m + 1;

	bool* arr;
	arr = new bool[num];
	memset(arr, true, sizeof(bool) * num);

	bool no = true;
	for (int i = m; i < n + 1; i++)
	{
		if (i == 0 || i == 1)
			arr[i - m] = false;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				arr[i - m] = false;
				break;
			}
		}
		if (arr[i - m] == true)
			no = false;
	}

	if (no == true)
	{
		printf("-1\n");
		return;
	}

	int add = 0;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] == true)
			add += i + m;
	}
	printf("%d\n", add);

	bool min = true;
	for (int i = 0; i < num; i++)
	{
		if (min == true && arr[i] == true)
		{
			printf("%d\n", i + m);
			break;
		}
	}

	delete[] arr;
}

//소인수분해
void baekjoon11653()
{
	int n;
	scanf("%d", &n);
	if (n == 1)
		return;

	int i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			printf("%d\n", i);
			n /= i;
		}
		else
			i++;
	}
}

//소수 구하기
void baekjoon1929()
{
	int m, n;
	scanf("%d %d", &m, &n);
	
#if 0 //시간 초과
	if (m == 1)
		m++;
	for (int i = m; i < n + 1; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
			if (j == i - 1)
				printf("%d\n", i);
		}
	}
#else
	bool check[1000000];
	memset(check, true, sizeof(bool) * 1000000);
	check[0] = false;
	
	for (int i = 2; i < 500000; i++)
	{
		for (int j = 2; i * j < 1000000; j++)
		{
			if (check[i * j - 1] == false)
				continue;
			check[i * j - 1] = false;
		}
	}

	for (int i = m; i < n + 1; i++)
	{
		if (check[i - 1] == true)
			printf("%d\n", i);
	}
#endif
}

//베르트랑 공준
void baekjoon4948()
{
	while (true)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;

		int count = 0;
		int min = n + 1;
		int max = n * 2;
		bool* check = new bool[max];
		memset(check, true, sizeof(bool) * max);
		check[0] = false;

		for (int i = 2; i < max + 1; i++)
			for (int j = 2; i * j < max + 1; j++)
				check[i * j - 1] = false;

		for (int i = min - 1; i < max; i++)
			if (check[i] == true)
				count++;

		printf("%d\n", count);

		delete[] check;
	}
}

//골드바흐의 추측
void baekjoon9020()
{
	int t;
	scanf("%d", &t);

	bool check[10000];
	memset(check, true, sizeof(bool) * 10000);
	check[0] = false;

	for (int i = 2; i < 10000; i++)
		for (int j = 2; i * j < 10000; j++)
			check[i * j - 1] = false;

	for (int k = 0; k < t; k++)
	{
		int n;
		scanf("%d", &n);
		int a = n / 2;
		int b = n / 2;

		if (check[n / 2 - 1] == false)
		{
			while (check[a - 1] == false || 
				   check[b - 1] == false)
			{
				a--;
				b++;
			}
			
		}

		printf("%d %d\n", a, b);
	}
}

//직사각형에서 탈출
void baekjoon1085()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);

	int disX, disY;
	disX = w - x > x ? x : w - x;
	disY = h - y > y ? y : h - y;

	if (disX > disY)
		printf("%d\n", disY);
	else
		printf("%d\n", disX);
}

//네 번째 점
void baekjoon3009()
{
	int point[4][2];
	for (int i = 0; i < 3; i++)
		scanf("%d %d", &point[i][0], &point[i][1]);

	if (point[0][0] == point[1][0])
		point[3][0] = point[2][0];
	else if (point[0][0] == point[2][0])
			 point[3][0] = point[1][0];
	else if (point[1][0] == point[2][0])
			 point[3][0] = point[0][0];

	if (point[0][1] == point[1][1])
		point[3][1] = point[2][1];
	else if (point[0][1] == point[2][1])
			 point[3][1] = point[1][1];
	else if (point[1][1] == point[2][1])
			 point[3][1] = point[0][1];

	printf("%d %d\n", point[3][0], point[3][1]);
}

//직각삼각형
void baekjoon4153()
{
	while (true)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;

		int a2 = a * a;
		int b2 = b * b;
		int c2 = c * c;

		if (a2 + b2 == c2 ||
			b2 + c2 == a2 ||
			a2 + c2 == b2)
			printf("right\n");
		else
			printf("wrong\n");
	}
}

//택시 기하학
#define M_PI 3.14159265358979323846
void baekjoon3053()
{
	double r;
	scanf("%lf", &r);

	printf("%lf\n", r * r * M_PI);
	printf("%lf\n", r * r * 2);
}

//터렛
#include <math.h>

void baekjoon1002()
{
	int t;
	scanf("%d", &t);

	for (int k = 0; k < t; k++)
	{
		int x1, y1, r1, x2, y2, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		if (x1 == x2 && y1 == y2 && r1 == r2)
		{
			printf("-1\n");
			continue;
		}

		float dis1 = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		float dis2 = r1 + r2;
		float dis3 = r1 - r2;
		if (dis3 < 0) dis3 *= -1;

		if (dis3 < dis1 && dis1 < dis2)
			printf("2\n");
		else if (dis1 == dis2 || dis1 == dis3)
			printf("1\n");
		else
			printf("0\n");
	}
}
