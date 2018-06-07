#include <iostream>
#include <queue>
#include <vector>

void DFS(std::vector<bool>& adjacencyMatrix, std::vector<bool>& visit, int N, int V)
{
	std::cout << V + 1 << ' ';

	visit[V] = true;

	for (int i = 0; i < N; ++i)
	{
		if (adjacencyMatrix[N * V + i] && !visit[i])
			DFS(adjacencyMatrix, visit, N, i);
	}
}

void BFS(std::vector<bool>& adjacencyMatrix, std::queue<int>& queue, std::vector<bool>& visit, int N, int V)
{
	queue.push(V);
	visit[V] = true;

	while (!queue.empty())
	{
		V = queue.front();
		queue.pop();
		std::cout << V + 1 << ' ';

		for (int i = 0; i < N; ++i)
		{
			if (adjacencyMatrix[N * V + i] && !visit[i])
			{
				queue.push(i);
				visit[i] = true;
			}
		}
	}
}

int main()
{
	int N, M, V;
	std::cin >> N >> M >> V;

	std::vector<bool> adjacencyMatrix;
	for (int i = 0; i < N * N; ++i)
		adjacencyMatrix.push_back(false);

	for (int i = 0; i < M; ++i)
	{
		int vertex1, vertex2;
		std::cin >> vertex1 >> vertex2;
		--vertex1;
		--vertex2;

		adjacencyMatrix[N * vertex1 + vertex2] = adjacencyMatrix[N * vertex2 + vertex1] = true;
	}

	std::vector<bool> visit;
	for (int i = 0; i < N; ++i)
		visit.push_back(false);

	DFS(adjacencyMatrix, visit, N, V - 1);
	std::cout << std::endl;

	for (int i = 0; i < N; ++i)
		visit[i] = false;

	std::queue<int> queue;
	BFS(adjacencyMatrix, queue, visit, N, V - 1);

	return 0;
}
