#include <iostream>
#include <stack>
#include <string>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		std::string string;
		std::cin >> string;

		bool flag = false;
		std::stack<bool> stack;
		for (auto& c : string)
		{
			if (c == '(')
				stack.push(true);
			else if (stack.empty())
			{
				flag = true;
				break;
			}
			else
				stack.pop();
		}

		if (flag || !stack.empty())
			std::cout << "NO" << std::endl;
		else
			std::cout << "YES" << std::endl;
	}

	return 0;
}
