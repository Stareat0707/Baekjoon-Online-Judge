#include <iostream>
#include <stack>
#include <string>

int main()
{
	int N;
	std::cin >> N;

	std::stack<int> stack;
	for (int i = 0; i < N; ++i)
	{
		std::string operation;
		std::cin >> operation;

		if (operation == "push")
		{
			int X;
			std::cin >> X;

			stack.push(X);
		}
		else if (operation == "pop")
		{
			if (stack.empty())
				std::cout << -1 << std::endl;
			else
			{
				std::cout << stack.top() << std::endl;
				stack.pop();
			}
		}
		else if (operation == "size")
			std::cout << stack.size() << std::endl;
		else if (operation == "empty")
		{
			if (stack.empty())
				std::cout << 1 << std::endl;
			else
				std::cout << 0 << std::endl;
		}
		else
		{
			if (stack.empty())
				std::cout << -1 << std::endl;
			else
				std::cout << stack.top() << std::endl;
		}
	}

	return 0;
}
