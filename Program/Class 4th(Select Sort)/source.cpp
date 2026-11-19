#include <iostream>

using namespace std;


int main()
{
#pragma region Select Sort
	//주어진 리스트 중에 최소값을 찾은 다음 특정한 위치에서 결과를 교체하는 방식으로 정렬하는 알고리즘
	int list[] = { 9, 6, 7 ,3, 5 };

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

			cout << min_index << endl;
		}

		swap(list[i], list[min_index]);

		for (const auto& element : list)
		{
			cout << element << " ";
		}
		cout << endl << endl;
	}


#pragma endregion

	return 0;
}