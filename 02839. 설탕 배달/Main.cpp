#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	if (n % 5 == 0)
		std::cout << n / 5 << std::endl;
	else
	{
		for (int i = n / 5; i > 0; --i)
		{
			if ((n - 5 * i) % 3 == 0)
			{
				std::cout << i + (n - 5 * i) / 3 << std::endl;
				return 0;
			}
		}

		if (n % 3 == 0)
			std::cout << n / 3 << std::endl;
		else
			std::cout << -1 << std::endl;
	}
	return 0;
}
