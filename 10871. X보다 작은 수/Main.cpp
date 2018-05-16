#include <iostream>

int main()
{
	int n, x;
	std::cin >> n >> x;

	for (int i = 0; i < n; ++i)
	{
		int input;
		std::cin >> input;

		if (input < x)
			std::cout << input << ' ';
	}

	std::cout << std::endl;
	return 0;
}
