#include <iostream>
#include <stack>
#include <string>

void push(std::stack<int>& stack, int n, std::string& string)
{
	stack.push(n);
	string += '+';
}

int pop(std::stack<int>& stack, std::string& string)
{
	int returnValue = stack.top();
	stack.pop();
	string += '-';
	return returnValue;
}

int main()
{
	int n;
	std::cin >> n;

	int startIndex = 1;
	std::stack<int> stack;
	std::string result;
	for (int i = 0; i < n; ++i)
	{
		int input;
		std::cin >> input;

		if (!stack.empty())
		{
			if (stack.top() == input)
			{
				pop(stack, result);
				continue;
			}

			if (input < stack.top())
			{
				std::cout << "NO" << '\n';
				return 0;
			}
		}

		for (int j = startIndex; j <= input; ++j)
		{
			push(stack, j, result);
			if (stack.top() == input)
			{
				startIndex = j + 1;
				break;
			}
		}

		pop(stack, result);
	}

	for (auto& c : result)
		std::cout << c << '\n';
	return 0;
}
