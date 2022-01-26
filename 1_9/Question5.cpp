#include <stdio.h>
#include "Question5.h"

//최소, 최대
void baekjoon10818()
{
	int n, min, max;
	scanf("%d", &n);
	min = 1000000;
	max = -1000000;


	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);

		if (min > a) min = a;
		if (max < a) max = a;
	}

	printf("%d %d\n", min, max);
}

//최댓값
void baekjoon2562()
{
	int a[9], max = 0, index = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		if (max < a[i])
		{
			max = a[i];
			index = i + 1;
		}
	}

	printf("%d\n", max);
	printf("%d\n", index);
}

//숫자의 개수
void baekjoon2577()
{
	int a, b, c, n;
	int arr[10] = { 0 };

	scanf("%d %d %d", &a, &b, &c);
	n = a * b * c;

	while (n != 0)
	{
		arr[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
}

//나머지
void baekjoon3052()
{
	int arr[10] = { 0 };
	int count = 1;
	int a;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		arr[i] = a % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j]) break;

			if (j == 9) count++;
		}
	}

	printf("%d\n", count);
}

//평균
void baekjoon1546()
{
	double arr[1000];
	double score = 0;
	int max = 0;
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
		if (max < arr[i]) max = arr[i];
	}

	for (int i = 0; i < n; i++)
		score += arr[i] / max * 100;
	score /= n;

	printf("%.14lf", score);
}

//OX퀴즈
void baekjoon8958()
{
	int n;
	int score = 0;
	int o = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char ox[80] = "\0";
		scanf("%s", &ox);

		for (int j = 0; j < 80; j++)
		{
			if (ox[j] == 'O')
			{
				while (ox[j] == 'O')
				{
					o++;
					j++;
				}

				for (int k = 1; k < o + 1; k++)
					score += k;

				o = 0;
			}

			if (ox[j] == '\0')
				break;
		}

		printf("%d\n", score);
		score = 0;
	}
}

//평균은 넘겠지
void baekjoon4344()
{
	int c;
	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		float n;
		float students[1000];
		float score = 0;
		float rate;
		float count = 0;

		scanf("%f", &n);
		for (int j = 0; j < n; j++)
		{
			scanf("%f", &students[j]);
			score += students[j];
		}
		score /= n;

		for (int j = 0; j < n; j++)
		{
			if (students[j] > score)
				count++;
		}
		rate = count / n * 100;

		printf("%.3f%%\n", rate);
	}
}
