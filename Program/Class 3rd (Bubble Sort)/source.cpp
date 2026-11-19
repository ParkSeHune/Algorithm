#include <iostream>

using namespace std;


int main()
{
#pragma region 인플레이스 정렬
	//정렬 과정에서 추가적인 자료구조 또는 메모리 공간을 많이 사용하지 않고, 원래 주어진 배열이나 리스트 자체를 직접 수정하여 정렬하는 방식

#pragma region Bubble Sort
	//서로 인접한 두 원소를 비교하여 정렬하는 알고리즘
	int bubble[] = { 999, -17, 4, 90, 333, 1, 0, 66, 2 };

	int count = sizeof(bubble) / sizeof(bubble[0]);
	cout << "COUNT : " << count << endl;

	for (int i = 0; i < count - 1; i++)
	{
		for (int j = 0; j < (count - i) - 1; j++)
		{
			if (bubble[j] > bubble[j + 1])
			{
				swap(bubble[j], bubble[j + 1]);
			}
			cout << bubble[j] << " ";
		}
		cout << endl;
	}

	cout << "\nRESULT : ";
	for (const auto& element : bubble)
	{
		cout << element << " ";
	}

#pragma endregion


#pragma endregion

	return 0;
}