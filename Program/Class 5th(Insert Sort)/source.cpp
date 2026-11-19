#include <iostream>

using namespace std;


int main()
{
#pragma region Insert Sort
	//데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여 자신의 위치를 찾아 삽입하는 방식으로 정렬하는 알고리즘
	int list[] = { 8, 5, 6, 2, 4 };
	int size = sizeof(list) / sizeof(list[0]);

	int key;

	for (int i = 0; i < size - 1; i++)
	{
		int j;
		key = list[i + 1];
		cout << "Key : " << key << endl;
		for (j = i; j >= 0 && list[j] > key; j--)
		{
			list[j + 1] = list[j];
		}
		list[j + 1] = key;

		cout << "List : ";
		for (const auto& element : list)
		{
			cout << element << " ";
		}
		cout << endl;
	}
#pragma endregion

	return 0;
}