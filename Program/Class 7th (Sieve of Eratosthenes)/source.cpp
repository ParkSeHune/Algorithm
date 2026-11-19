#include <iostream>
#include <time.h>

using namespace std;

void sieve(int n)
{
	int* container = new int[n + 1];
	int limit = int(sqrt(n));

	for (int i = 0; i <= n; i++)
	{
		container[i] = i;
	}

	for (int i = 2; i <= limit; i++)
	{
		if (container[i] == 0)
		{
			continue;
		}

		for (int j = i * i; j <= n; j += i)
		{
			container[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (container[i] != 0)
		{
			cout << container[i] << " ";
		}
	}

	cout << endl;
	delete[] container;
}

int main()
{
#pragma region 에라토스테네스의 체

	int n = 17;

	for (int i = 2; i <= n; i++)
	{
		bool flag = true;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	sieve(16);
#pragma endregion

	return 0;
}