#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

void search(int list[], int key, int size)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2;

		if (list[pivot] == key)
		{
			cout << "Key : " << list[pivot] << endl;
			return;
		}
		else if (list[pivot] > key)
		{
			right = pivot - 1;
		}
		else
		{
			left = pivot + 1;
		}
	}

	cout << "Not key found" << endl;
}

int main()
{
#pragma region 이분 탐색(Binary Search)
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를 좁혀나가는 방식으로 동작하는 알고리즘
	int list[] = { 66, 92, 11, 6, 55, 5, 27, 13 };

	int size = sizeof(list) / sizeof(list[0]);

	int min_index;

	for (int i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < size; j++)
		{
			if (list[min_index] > list[j])
			{
				min_index = j;
			}
		}

		swap(list[i], list[min_index]);
	}

	for (auto& element : list)
	{
		cout << element << " ";
	}
	cout << endl;

	search(list, 5, size);
#pragma endregion

	return 0;
}