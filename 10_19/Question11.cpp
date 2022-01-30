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
	int n;
	scanf("%d", &n);
	int tmp;

	int start = 0;
	int digit = 0;
	tmp = n;
	while (tmp != 0)
	{
		tmp /= 10;
		digit++;
	}
	start = n - (digit * 9);

	int sum = 0;
	bool check = false;
	for (int i = start; i < n + 1; i++)
	{
		sum = tmp = i;
		
		while (tmp != 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}

		if (sum == n)
		{
			check = true;
			printf("%d\n", i);
			break;
		}
	}

	if (check == false)
		printf("0\n");
}

//덩치
void baekjoon7568()
{
	int n;
	scanf("%d", &n);
	int** human = new int * [n];
	int* rank = new int[n];

	for (int i = 0; i < n; i++)
	{
		human[i] = new int[2];
		int x, y;
		scanf("%d %d", &x, &y);
		human[i][0] = x;
		human[i][1] = y;
		rank[i] = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j) continue;

			if (human[i][0] < human[j][0] &&
				human[i][1] < human[j][1])
			{
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf("%d ", rank[i]);

	for (int i = 0; i < n; i++)
		delete[] human[i];
	delete[] human;
	delete[] rank;
}

//체스판 다시 칠하기
void baekjoon1018()
{
	int n, m;
	scanf("%d %d", &n, &m);

	char** wb = new char * [n];
	for (int i = 0; i < n; i++)
	{
		wb[i] = new char[m + 1];
		for (int j = 0; j < m; j++)
			scanf(" %c", &wb[i][j]);
		wb[i][m] = '\0';
	}
	bool black = wb[0][0] == 'W' ? false : true;
	int count = 0;

	

	printf("%d\n", count);

	for (int i = 0; i < n; i++)
		delete[] wb[i];
	delete[] wb;
}

//영화감독 숌
void baekjoon1436()
{
	int n;
	scanf("%d", &n);
	int num = 666;
	int _n = 0;

	while (true)
	{
		int tmp = num;
		int count = 0;
		
		while (tmp != 0)
		{
			int a = tmp % 10;

			if (a == 6)
				count++;
			else
				count = 0;

			if (count == 3)
			{
				_n++;
				break;
			}

			tmp /= 10;
		}

		if (n == _n)
			break;
		else
			num++;
	}

	printf("%d\n", num);

# if 0//이런 느낌으로 해서 10번은 틀린거 같음
	int n;
	scanf("%d", &n);
	int num = 666;

	while (true)
	{
		int tmp = num;
		while (tmp % 1000 > 100)
		{
			if (tmp % 1000 == 666)
			{
				n--;
				break;
			}
			else
				tmp /= 10;
		}

		if (n == 0)
			break;
		else
			num++;
	}

	printf("%d\n", num);

#endif
}
