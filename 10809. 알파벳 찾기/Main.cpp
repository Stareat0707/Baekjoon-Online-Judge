#include <array>
#include <iostream>
#include <string>

int main()
{
	std::array<int, 26> charIndex;
	charIndex.fill(-1);

	std::string input;
	std::cin >> input;

	for (int i = 0; i < input.size(); ++i)
	{
		if (charIndex[input[i] - 97] == -1)
			charIndex[input[i] - 97] = i;
	}

	for (auto n : charIndex)
		std::cout << n << ' ';

	return 0;
}
