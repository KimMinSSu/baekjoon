#include "Question12.h"
#include <stdio.h>
#include <string.h>

// 버블 정렬
void bSort(int* arr, int num, int UpDown)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (UpDown == 0)
			{
				if (arr[i] > arr[j])
				{
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
			else //if (UpDown == 1)
			{
				if (arr[i] < arr[j])
				{
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
			}
		}
	}
}

//수 정렬하기
void baekjoon2750()
{
	int n;
	scanf("%d", &n);
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	bSort(arr, n, 0);

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	delete[] arr;
}

//수 정렬하기2
void baekjoon2751()
{
}

//수 정렬하기 3
void baekjoon10989()
{
}

//통계학
void baekjoon2108()
{
}

//소트인사이드
void baekjoon1427()
{
	int n;
	scanf("%d", &n);
	int arr[10];
	int num = 0;

	while (n != 0)
	{
		int tmp = n % 10;
		n /= 10;
		arr[num] = tmp;
		num++;
	}

	bSort(arr, num, 1);

	for (int i = 0; i < num; i++)
		printf("%d", arr[i]);
}

//좌표 정렬하기
void baekjoon11650()
{
}

//좌표 정렬하기2
void baekjoon11651()
{
	int n;
	scanf("%d", &n);

}

//단어 정렬
void baekjoon1181()
{
}

//나이순 정렬
void baekjoon10814()
{
}

//좌표 압축
void baekjoon18870()
{
}
