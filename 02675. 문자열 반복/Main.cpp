#include <iostream>
#include <string>

int main()
{
	int t = 0;
	std::cin >> t;

	for (int i = 0; i < t; ++i)
	{
		int r = 0;
		std::cin >> r;

		std::string s;
		std::cin >> s;

		for (auto& c : s)
		{
			for (int j = 0; j < r; ++j)
				std::cout << c;
		}

		std::cout << std::endl;
	}

	return 0;
}
