#include "Question6.h"
#include  <stdio.h>

//정수 N개의 합
long long baekjoon15596(int* a, int n)
{
	long long ans = 0;

	for (int i = 0; i < n; i++)
		ans += a[i];

	return ans;
}

//셀프 넘버
#define max 10000
void baekjoon4673()
{
	int n, tmp;
	bool self[max];
	for (int i = 0; i < max; i++)
		self[i] = true;
	self[max - 1] = false;

	for (int i = 0; i < max; i++)
	{
		n = tmp = i;

		while (tmp != 0)
		{
			n += tmp % 10;
			tmp /= 10;

			if (n > max)
				break;

			if (tmp == 0)
				self[n - 1] = false;
		}
	}
	
	for (int i = 0; i < max; i++)
		if (self[i] == true)
			printf("%d\n", i + 1);
}

//한수
void baekjoon1065()
{
	int arr[4] = { 0 };
	int count = 0;
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n + 1; i++)
	{
		int tmp = i;
		int digit = 0;

		while (tmp != 0)
		{
			arr[digit] = tmp % 10;
			tmp /= 10;
			digit++;
		}

		if (digit > 2)
		{
			int _minus = arr[0] - arr[1];
			int minus;

			for (int j = 1; j < digit; j++)
			{
				minus = arr[j - 1] - arr[j];

				if (minus != _minus) break;

				if (j == digit - 1)
					count++;
			}
		}
		else
			count++;
	}

	printf("%d\n", count);
}
