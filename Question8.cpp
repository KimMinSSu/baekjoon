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
}

//부녀회장이 될테야
void baekjoon2775()
{
}

//설탕배달
void baekjoon2839()
{
}

//큰 수 A+B
void baekjoon10757()
{
}

//Fly me to the Alpha Centauri
void baekjoon1011()
{
}
