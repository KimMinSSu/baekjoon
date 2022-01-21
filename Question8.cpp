#include "Question8.h"
#include <stdio.h>

//손익분기점
void baekjoon1712()
{
	int constCost;
	int makeCost;
	int price;
	scanf("%d %d %d", &constCost, &makeCost, &price);

	int makeNum = -1;
	int profit = price - makeCost;

	if (profit < 1)
	{
		printf("%d\n", makeNum);
		return;
	}
	
	makeNum = constCost / profit;
	makeNum++;

	printf("%d\n", makeNum);
}

//벌집
void baekjoon2292()
{
	int n;
	scanf("%d", &n);
	int count = 0;

	int i = 0;
	int room = 1;
	while (true)
	{
		room += i * 6;
		if (n > room)
			count++;
		else
		{
			count++;
			break;
		}

		i++;
	}

	printf("%d\n", count);
}

//분수찾기
void baekjoon1193()
{
	int x;
	scanf("%d", &x);
	
	//a/b
	int a = 1;
	int b = 1;
	int count = 1;
	bool up = true;

	int i = 0;
	while (true)
	{
		i += count;
		if (i >= x)
		{
			i -= count;
			break;
		}

		count++;
	}
	x -= i;

	if (count % 2 == 0)
		up = false;

	if (up == true)
	{
		a = count;
		while (x > 1)
		{
			a--;
			b++;
			x--;
		}
	}
	else if (up == false)
	{
		b = count;
		while (x > 1)
		{
			a++;
			b--;
			x--;
		}
	}

	printf("%d/%d\n", a, b);
}

//달팽이는 올라가고 싶다
void baekjoon2869()
{
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);

	v -= a;
	int day = 1;

	int move = a - b;
	day +=  v / move;
	
	if (v % move)
		day++;

	printf("%d\n", day);
}

//ACM 호텔
void baekjoon10250()
{
	int width = 0;
	int height = 0;
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int h, w, n;
		scanf("%d %d %d", &h, &w, &n);

		if (n % h == 0)
		{
			width = n / h;
			height = h;
		}
		else
		{
			width = (n / h) + 1;
			height = n % h;
		}
			
		if (width < 10)
			printf("%d0%d\n", height, width);
		else
			printf("%d%d\n", height, width);
	}
}

//부녀회장이 될테야
void baekjoon2775()
{
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);
		
		if (n == 1)
		{
			printf("1\n");
			continue;
		}

		int** room;
		room = new int* [k + 1];
		for (int j = 0; j < k + 1; j++)
			room[j] = new int[n];

		for (int j = 0; j < k + 1; j++)
		{
			for (int l = 0; l < n; l++)
			{
				if (j == 0)
					room[0][l] = l + 1;
				else
				{
					if (l == 0)
						room[j][0] = 1;
					else
						room[j][l] = room[j - 1][l] + room[j][l - 1];
				}
			}
		}

		printf("%d\n", room[k][n - 1]);

		for (int j = 0; j < k + 1; j++)
			delete[] room[j];
		delete[] room;
	}
}

//설탕배달
void baekjoon2839()
{
	int n;
	scanf("%d", &n);
	int count = 0;

	while (n > 0)
	{
		if (n % 5 == 0)
		{
			count += n / 5;
			break;
		}
		else if (n % 3 == 0)
		{
			n -= 3;
			count++;
		}
		else if (n > 5)
		{
			n -= 5;
			count++;
		}
		else
		{
			count = -1;
			break;
		}
	}
	printf("%d\n", count);
}

//큰 수 A+B
#include <string.h>
void strReverse(char* str, int len)
{
	int tmp = 0;
	int i = 0;
	int j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;

		i++; j--;
	}
}
void baekjoon10757()
{
	char strA[10002] = { '\0' };
	char strB[10002] = { '\0' };
	char result[10003] = { '\0' };
	scanf("%s %s", strA, strB);

	int lenA = strlen(strA);
	int lenB = strlen(strB);
	int lenR = lenA > lenB ? lenA : lenB;

	strReverse(strA, lenA);
	strReverse(strB, lenB);

	int a, b, c = 0;
	for (int i = 0; i < lenR; i++)
	{
		a = strA[i] - '0';
		b = strB[i] - '0';
		if (a < 0) a = 0;
		if (b < 0) b = 0;
		int add = a + b + c;

		if (add > 9)
		{
			result[i] = (add % 10) + '0';
			c = 1;
		}
		else
		{
			result[i] = add + '0';
			c = 0;
		}
	}

	if (c == 1)
	{
		result[lenR] = '1';
		lenR += 1;
	}

	strReverse(result, lenR);
	
	printf("%s\n", result);
}

//Fly me to the Alpha Centauri
void baekjoon1011()
{
	int t;
	scanf("%d", &t);

	for (int k = 0; k < t; k++)
	{
		int start, dst;
		scanf("%d %d", &start, &dst);
		int count = 0;
		int dis = dst - start;
		int _dis = dis;
		int mid = dis / 2;
		int move = 1;

		while (dis > 0)
		{
			if (_dis % 2 == 0)
			{
				
			}
			else if (_dis % 2 == 1)
			{
				if (move < mid)
				{
					dis -= move;
					count++;
					move++;
				}
				else
				{
					dis -= move;
					count++;
					move--;
				}
			}
		}

		printf("%d\n", count);
	}
	
}
