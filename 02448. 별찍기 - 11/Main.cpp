#include <iostream>
#include <vector>

void printStar(int row)
{
	switch (row % 3)
	{
	case 0:
		std::cout << "  *  ";
		break;
	case 1:
		std::cout << " * * ";
		break;
	default:
		std::cout << "*****";
	}
}

int main()
{
	int n;
	std::cin >> n;

	std::vector<bool> prev;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - 3 * (i / 3 + 1); ++j)
			std::cout << ' ';

		std::vector<bool> now;
		for (int j = 0; j < i / 3 + 1; ++j)
		{
			if (j == 0 || j == i / 3)
			{
				printStar(i);
				now.push_back(true);
			}
			else if (prev[j - 1] ^ prev[j])
			{
				printStar(i);
				now.push_back(true);
			}
			else
			{
				std::cout << "     ";
				now.push_back(false);
			}

			std::cout << ' ';
		}

		for (int j = 0; j < n - 3 * (i / 3 + 1); ++j)
			std::cout << ' ';

		if (i % 3 == 2)
			prev = now;
		std::cout << std::endl;
	}
	return 0;
}
