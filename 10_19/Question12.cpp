#include "Question12.h"
#include <stdio.h>

// 버블 정렬
void bSort(int* arr, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
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

	bSort(arr, n);

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
}

//좌표 정렬하기
void baekjoon11650()
{
}

//좌표 정렬하기2
void baekjoon11651()
{
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
