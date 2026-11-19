#include <iostream>

using namespace std;

void QuickSort(int list[], int start, int end)
{
    if (start >= end) return;

    int pivotIndex = start;
    int pivotValue = list[pivotIndex];

    int left = start + 1;
    int right = end;

    while (true)
    {
        while (left <= end && list[left] <= pivotValue) left++;
        while (right > start && list[right] >= pivotValue) right--;

        if (left > right) break;

        swap(list[left], list[right]);
    }

    swap(list[pivotIndex], list[right]);

    QuickSort(list, start, right - 1);
    QuickSort(list, right + 1, end);
}

int main()
{
#pragma region Quick Sort
    // 기준점을 획득한 다음 기준점을 기준으로 배열을 나우고 한 쪽에는 기준점보다 작은 값들이 위치하게 한 다음
    // 다른 한 쪽에는 기준점보다 큰 값들이 위치하도록 한다.

    // 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬한다.

    int list[] = { 5, 3, 8, 4, 1, 6, 2, 7 };

    int size = sizeof(list) / sizeof(list[0]);

    QuickSort(list, 0, size - 1);

    for (auto& element : list)
    {
        cout << element << " ";
    }cout << endl;

#pragma endregion

    return 0;
}