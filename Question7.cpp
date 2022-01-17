#include "Question7.h"
#include <stdio.h>
#include <string.h>

//아스키 코드
void baekjoon11654()
{
	char a;
	scanf("%c", &a);
	printf("%d\n", a);
}

//숫자의 합
void baekjoon11720()
{
	int result = 0;
	int n;
	char num[101] = { '\0' };
	scanf("%d", &n);
	scanf("%s", &num);

	for (int i = 0; i < n; i++)
		result += num[i] - '0';

	printf("%d\n", result);
}

//알파벳 찾기
void baekjoon10809()
{
	char s[101];
	int spelling[26];
	memset(s, '\0', sizeof(char) * 101);
	memset(spelling, -1, sizeof(int) * 26);
	scanf("%s", s);

	int i = 0;
	while (s[i] != '\0')
	{
		if (spelling[s[i] - 'a'] != -1)
		{
			i++;
			continue;
		}

		spelling[s[i] - 'a'] = i;
		i++;
	}

	for (int i = 0; i < 26; i++)
		printf("%d ", spelling[i]);
}

//문자열 반복
void baekjoon2675()
{
	int t;
	int r;
	char s[21];
	scanf("%d", &t);

	int i = 0, j = 0;
	for (int i = 0; i < t; i++)
	{
		r = 0;
		memset(s, '\0', sizeof(char) * 21);
		scanf("%d %s", &r, &s);

		while (s[j] != '\0')
		{
			for (int k = 0; k < r; k++)
				printf("%c", s[j]);

			j++;
		}
		j = 0;
		printf("\n");
	}
}

//단어 공부
void baekjoon1157()
{
	char s[1000000];
	int alphabet[26];
	int max = 0;
	int maxIndex = 0;
	bool same = false;

	memset(s, '\0', sizeof(char) * 1000000);
	scanf("%s", &s);
	memset(alphabet, 0, sizeof(int) * 26);
	
	int i = 0;
	while (s[i] != '\0')
	{
		int n = s[i] - 'a';
		if (n < 0)
			n = s[i] - 'A';

		alphabet[n]++;
		i++;
	}

	for (i = 0; i < 26; i++)
	{
		if (max < alphabet[i])
		{
			max = alphabet[i];
			maxIndex = i;
			same = false;
		}
		else if (max == alphabet[i])
		{
			same = true;
		}
	}

	if (same == true)
		printf("?\n");
	else
		printf("%c\n", 'A' + maxIndex);
}

//단어의 개수
void baekjoon1152()
{
	int word = 0;
	char s[1000000];
	memset(s, '\0', sizeof(char) * 1000000);
	scanf("%[^\n]", &s);

	int i = 0;
	if (s[i] == ' ') 
		i++;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] == '\0')
				break;

			word++;
		}

		i++;
	}
	i -= 1;

	if (s[i] != ' ')
		word++;

	printf("%d\n", word);
}

//상수
void baekjoon2908()
{
	int a;
	int b;
	char arrA[4];
	char arrB[4];

	scanf("%d", &a);
	scanf("%d", &b);
	memset(arrA, '\0', sizeof(char) * 4);
	memset(arrB, '\0', sizeof(char) * 4);

	int i = 0;
	while (a != 0)
	{
		arrA[i] = '0' + (a % 10);
		a /= 10;
		i++;
	}

	i = 0;
	while (b != 0)
	{
		arrB[i] = '0' + (b % 10);
		b /= 10;
		i++;
	}

	for (i = 0; i < 3; i++)
	{
		if (arrA[i] > arrB[i])
		{
			printf("%s\n", arrA);
			break;
		}
		else if (arrA[i] < arrB[i])
		{
			printf("%s\n", arrB);
			break;
		}

		if (i == 2)
			if (arrA[2] == arrB[2])
				printf("%s\n", arrA);
	}
}

//다이얼
void baekjoon5622()
{
	int _time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int time = 0;
	char alphabet[16];
	memset(alphabet, '\0', sizeof(char) * 16);
	scanf("%s", &alphabet);

	int i = 0;
	while (alphabet[i] != '\0')
	{
		time += _time[alphabet[i] - 'A'];
		i++;
	}
	
	printf("%d\n", time);
}

//크로아티아 알파벳
void baekjoon2941()
{
	char s[101];
	memset(s, '\0', sizeof(char) * 101);
	scanf("%s", &s);

	int count = strlen(s);

	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '=')
		{
			if (s[i - 1] == 'c' ||
				s[i - 1] == 's')
				count--;
			else if (s[i - 1] == 'z')
			{
				count--;

				if (s[i - 2] == 'd')
					count--;
			}
		}
		else if (s[i] == '-')
		{
			if (s[i - 1] == 'c' ||
				s[i - 1] == 'd')
				count--;
		}
		else if (s[i] == 'j')
		{
			if (s[i - 1] == 'l' ||
				s[i - 1] == 'n')
				count--;
		}
		i++;
	}

	printf("%d\n", count);
}
#if 0
//피곤할 때 대충
void baekjoon2941()
{
	int count = 0;
	char s[101];
	memset(s, '\0', sizeof(char) * 101);
	scanf("%s", &s);

	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'c')
		{
			if (s[i + 1] == '=' ||
				s[i + 1] == '-')
			{
				count++;
				i += 2;
			}
			else
			{
				count++;
				i++;
			}
		}
		else if (s[i] == 'd')
		{
			if (s[i + 1] == '-')
			{
				count++;
				i += 2;
			}
			else if (s[i + 1] == 'z' &&
				s[i + 2] == '=')
			{
				count++;
				i += 3;
			}
			else
			{
				count++;
				i++;
			}
		}
		else if (s[i] == 'l')
		{
			if (s[i + 1] == 'j')
			{
				count++;
				i += 2;
			}
			else
			{
				count++;
				i++;
			}
		}
		else if (s[i] == 'n')
		{
			if (s[i + 1] == 'j')
			{
				count++;
				i += 2;
			}
			else
			{
				count++;
				i++;
			}
		}
		else if (s[i] == 's')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i += 2;
			}
			else
			{
				count++;
				i++;
			}
		}
		else if (s[i] == 'z')
		{
			if (s[i + 1] == '=')
			{
				count++;
				i += 2;
			}
			else
			{
				count++;
				i++;
			}
		}
		else
		{
			count++;
			i++;
		}
	}

	printf("%d\n", count);
}
#endif

//그룹 단어 체커
void baekjoon1316()
{
	int n;
	int count = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		bool check[26];
		char word[101];

		memset(check, false, sizeof(bool) * 26);
		memset(word, '\0', sizeof(char) * 101);
		scanf("%s", &word);

		int j = 0;
		while (word[j] != '\0')
		{
			if (check[word[j] - 'a'] == false)
			{
				check[word[j] - 'a'] = true;

				int k = j;
				while (word[j] == word[k])
					k++;

				j = k;
			}
			else
				break;
		}

		if (word[j] == '\0')
			count++;
	}

	printf("%d\n", count);
}
