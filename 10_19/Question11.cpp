#include "Question11.h"
#include <stdio.h>

//블랙잭
void baekjoon2798()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int* card = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &card[i]);

	int res = 0;
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int add = card[i] + card[j] + card[k];
				if (res < add && add <= m)
					res = add;

				if (res == m) break;
			}
			if (res == m) break;
		}
		if (res == m) break;
	}

	printf("%d\n", res);

	delete[] card;
}

//분해합
void baekjoon2231()
{
}

//덩치
void baekjoon7568()
{
}

//체스판 다시 칠하기
void baekjoon1018()
{
}

//영화감독 숌
void baekjoon1436()
{
}
