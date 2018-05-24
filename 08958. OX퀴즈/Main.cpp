#include <iostream>
#include <string>

int main()
{
	int testCase = 0;
	std::cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		std::string input;
		std::cin >> input;

		int total = 0;
		int bonus = 0;
		for (auto& c : input)
		{
			if (c == 'O')
				total += 1 + bonus++;
			else
				bonus = 0;
		}

		std::cout << total << std::endl;
	}
	return 0;
}
