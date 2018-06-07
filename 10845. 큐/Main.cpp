#include <iostream>
#include <string>
#include <queue>

int main()
{
	int N;
	std::cin >> N;

	std::queue<int> queue;
	for (int i = 0; i < N; ++i)
	{
		std::string operation;
		std::cin >> operation;

		if (operation == "push")
		{
			int X;
			std::cin >> X;

			queue.push(X);
		}
		else if (operation == "pop")
		{
			if (queue.empty())
				std::cout << -1 << '\n';
			else
			{
				std::cout << queue.front() << '\n';
				queue.pop();
			}
		}
		else if (operation == "size")
			std::cout << queue.size() << '\n';
		else if (operation == "empty")
			std::cout << queue.empty() << '\n';
		else if (operation == "front")
		{
			if (queue.empty())
				std::cout << -1 << '\n';
			else
				std::cout << queue.front() << '\n';
		}
		else
		{
			if (queue.empty())
				std::cout << -1 << '\n';
			else
				std::cout << queue.back() << '\n';
		}
	}

	return 0;
}
