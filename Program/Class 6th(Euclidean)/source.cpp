#include <iostream>
#include <time.h>

using namespace std;

int function(int x, int y)
{
	if (y == 0)
	{
		return x;
	}
	else
	{
		return function(y, x % y);
	}
}

int main()
{
#pragma region Euclidean Algorithm
	//두 개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘
	srand((unsigned int)time(NULL));
	int x, y;
	x = rand() % 100 + 1;
	y = rand() % 100 + 1;

	while (x == y)
	{
		y = rand() % 100 + 1;
	}

	cout << x << " " << y << endl;

	int result = 0;
	for (int i = 1; i <= x && i <= y; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			result = i;
		}
	}

	cout << "Result : " << result << endl;
	cout << "Result2 : " << function(x, y) << endl;

#pragma endregion

	return 0;
}