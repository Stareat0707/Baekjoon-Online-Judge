#include <iostream>
#include <string>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		std::string function;
		std::cin >> function;

		int n;
		std::cin >> n;

		std::string input;
		std::cin >> input;

		int front = 0;
		int back = -1;
		int size = n;
		int* deque = new int[n];

		if (size != 0)
		{
			int element = 0;
			for (int j = 1; j < input.size(); ++j)
			{
				if (input[j] == ',' || input[j] == ']')
				{
					deque[++back] = element;
					element = 0;
				}
				else
				{
					if (element != 0)
						element *= 10;

					element += input[j] - 48;
				}
			}
		}

		bool bReversed = false;
		bool flag = false;
		for (int j = 0; j < function.size(); ++j)
		{
			if (function[j] == 'R')
			{
				int temp = front;
				front = back;
				back = temp;

				bReversed = !bReversed;
			}
			else
			{
				if (size == 0)
				{
					flag = true;
					break;
				}
				else
				{
					bReversed ? --front : ++front;
					--size;
				}
			}
		}

		if (flag)
		{
			std::cout << "error" << '\n';
			continue;
		}

		std::cout << '[';
		for (int i = front; (bReversed ? i >= back : i <= back); (bReversed ? --i : ++i))
		{
			std::cout << deque[i];
			if (i != back)
				std::cout << ',';
		}
		std::cout << "]\n";

		delete[] deque;
	}

	return 0;
}
