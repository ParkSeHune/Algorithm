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
	void search(const T& start);
private:
	unordered_map<T, vector<T>> adjacencyList;
};

template<typename T>
void Graph<T>::insert(const T& i, const T& j)
{
	adjacencyList[i].push_back(j);
	adjacencyList[j].push_back(i);
}

template<typename T>
void Graph<T>::search(const T& start)
{
	queue<T> queue;
	unordered_set<T> visited;

	queue.push(start);
	visited.insert(start);

	while (!queue.empty())
	{
		T x = queue.front();
		queue.pop();
		cout << x << " ";
		for (const T& element : adjacencyList[x])
		{
			if (visited.count(element) == false)
			{
				queue.push(element);
				visited.insert(element);
			}
		}
	}
}

int main()
{
#pragma region BFS
	// 그래프에서 한 방향으로 갈 수 있을 만큼 깊이 들어갔다가, 더 이상 갈 수 없으면
	// 다시 돌아와서 다른 경로를 탐색하는 방법

	Graph<char> graph;

	graph.insert('A', 'B');
	graph.insert('A', 'C');
	graph.insert('B', 'D');
	graph.insert('B', 'E');
	graph.insert('C', 'F');
	graph.insert('C', 'G');

	graph.search('A');
#pragma endregion

	return 0;
}
