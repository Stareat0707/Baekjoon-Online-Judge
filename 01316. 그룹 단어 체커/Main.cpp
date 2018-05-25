#include <algorithm>
#include <iostream>
#include <string>
#include <list>

int main()
{
	int n = 0;
	std::cin >> n;

	int nGroupWord = 0;
	for (int i = 0; i < n; ++i)
	{
		std::string input;
		std::cin >> input;

		std::list<char> history;
		bool flag = false;
		for (int i = 0; i < input.size(); ++i)
		{
			std::list<char>::iterator iterator = std::find(history.begin(), history.end(), input.at(i));
			if (iterator == history.end())
				history.push_back(input.at(i));
			else if (input.at(i - 1) != input.at(i))
			{
				flag = true;
				break;
			}
		}

		if (!flag)
			++nGroupWord;
	}

	std::cout << nGroupWord << std::endl;
	return 0;
}
