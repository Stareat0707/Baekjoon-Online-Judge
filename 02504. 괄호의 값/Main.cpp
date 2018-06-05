#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::string string;
	std::cin >> string;

	bool flag = false;
	const int PARENTHESES = 0;
	const int BRACKETS = 1;
	std::stack<int> stack;
	for (auto& c : string)
	{
		switch (c)
		{
		case '(': case '[':
			stack.push(c == '(' ? PARENTHESES : BRACKETS);
			break;
		case ')':
		case ']':
			int number = (c == ')' ? 2 : 3);
			while (!stack.empty() && stack.top() != (c == ')' ? PARENTHESES : BRACKETS))
			{
				if (stack.top() == (c == ')' ? BRACKETS : PARENTHESES))
				{
					std::cout << 0 << std::endl;
					return 0;
				}

				number *= stack.top();
				stack.pop();
			}

			if (stack.empty())
			{
				std::cout << 0 << std::endl;
				return 0;
			}

			stack.pop();

			if (!stack.empty() && stack.top() != PARENTHESES && stack.top() != BRACKETS)
			{
				number += stack.top();
				stack.pop();
			}

			stack.push(number);
			break;
		}
	}

	if (stack.size() == 1 && stack.top() != PARENTHESES && stack.top() != BRACKETS)
		std::cout << stack.top() << std::endl;
	else
		std::cout << 0 << std::endl;

	return 0;
}
