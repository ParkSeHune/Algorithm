#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <unordered_set>

using namespace std;

template <typename T>
class Graph
{
public:
	void insert(const T& i, const T& j);
	void sort();
private:
	unordered_set<T> vertices;
	unordered_map<T, int> degree;
	unordered_map<T, vector<T>> adjacencyList;
};

template<typename T>
void Graph<T>::insert(const T& i, const T& j)
{
	adjacencyList[i].push_back(j);

	degree[j]++;

	vertices.insert(i);
	vertices.insert(j);

	if (degree.count(i) == false)
	{
		degree[i] = 0;
	}
}


template<typename T>
void Graph<T>::sort()
{
	queue<T> queue;

	int count = 0;

	for (const T& element : vertices)
	{
		if (degree[element] == 0)
		{
			queue.push(element);
		}
	}

	while (!queue.empty())
	{
		T x = queue.front();
		queue.pop();

		cout << x << " ";

		count++;

		for (const T& element : adjacencyList[x])
		{
			degree[element]--;

			if (degree[element] == 0)
			{
				queue.push(element);
			}
		}
	}

	cout << endl;
	if (count != vertices.size())
	{
		cout << "A Cycle has occurred." << endl;
	}
}

int main()
{
#pragma region 위상 정렬
	// 병합 그래프에 존재하는 각 정점들의 선행 순서를 지키며, 모든 정점을 차례대로 진행하는 방식의 정렬

	// 사이클이 발행하는 경우 위상 정렬 불가능

	// DAG(Directed Acyclic Graph) : 방향 비순환 그래프
	// 시간 복잡도 : O(V + E)

	// 위상 정렬하는 방법
	// 1. 진입 차수가 0인 정점을 큐에 삽입
	// 2. 큐에서 정점을 꺼내 해당 정점과 인접한 모든 정점의 진입 차수를 1 감소
	// 3. 새롭게 진입 차수가 0이 된 정점을 큐에 삽입
	// 4. 큐가 비어있을 때 까지 2 ~ 3 과정을 반복

	Graph<int> graph;

	graph.insert(1, 2);
	graph.insert(1, 5);

	graph.insert(2, 3);
	graph.insert(3, 4);

	graph.insert(4, 6);

	graph.insert(5, 6);
	graph.insert(6, 7);

	graph.sort();
#pragma endregion

	return 0;
}
