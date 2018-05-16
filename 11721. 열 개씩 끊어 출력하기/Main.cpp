#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;

	int cnt = 0;
	for (auto& c : str)
	{
		std::cout << c;
		++cnt;
		if (cnt % 10 == 0)
			std::cout << std::endl;
	}

	return 0;
}
