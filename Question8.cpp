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
void baekjoon10757()
{
	char a[10002];
	char b[10002];
	char c[10003];
	memset(a, '\0', sizeof(char) * 10002);
	memset(b, '\0', sizeof(char) * 10002);
	memset(c, '\0', sizeof(char) * 10003);
	scanf("%s %s", &a, &b);

	int lenA = strlen(a);
	int lenB = strlen(b);

}

//Fly me to the Alpha Centauri
void baekjoon1011()
{
}
