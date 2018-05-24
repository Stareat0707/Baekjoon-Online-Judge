#include <iostream>
#include <array>

int main()
{
	std::array<int, 8> nArray;
	for (auto& n : nArray)
	{
		std::cin >> n;
	}

	int difference = nArray[1] - nArray[0];
	for (int i = 1; i < nArray.size(); ++i)
	{
		if (nArray[i] - nArray[i - 1] != difference)
		{
			std::cout << "mixed" << std::endl;
			return 0;
		}
	}

	if (difference == 1)
		std::cout << "ascending" << std::endl;
	else
		std::cout << "descending" << std::endl;
	return 0;
}
