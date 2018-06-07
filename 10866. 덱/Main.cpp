#include <deque>
#include <iostream>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	std::deque<int> deque;
	for (int i = 0; i < N; ++i)
	{
		std::string command;
		std::cin >> command;

		if (command == "push_front")
		{
			int X;
			std::cin >> X;

			deque.push_front(X);
		}
		else if (command == "push_back")
		{
			int X;
			std::cin >> X;

			deque.push_back(X);
		}
		else if (command == "pop_front")
		{
			if (deque.empty())
				std::cout << -1 << '\n';
			else
			{
				std::cout << deque.front() << '\n';
				deque.pop_front();
			}
		}
		else if (command == "pop_back")
		{
			if (deque.empty())
				std::cout << -1 << '\n';
			else
			{
				std::cout << deque.back() << '\n';
				deque.pop_back();
			}
		}
		else if (command == "size")
			std::cout << deque.size() << '\n';
		else if (command == "empty")
			std::cout << deque.empty() << '\n';
		else if (command == "front")
		{
			if (deque.empty())
				std::cout << -1 << '\n';
			else
				std::cout << deque.front() << '\n';
		}
		else
		{
			if (deque.empty())
				std::cout << -1 << '\n';
			else
				std::cout << deque.back() << '\n';
		}
	}
	return 0;
}
