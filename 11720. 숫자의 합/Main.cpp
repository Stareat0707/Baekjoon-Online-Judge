#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int* nums = new int[n];
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		char input;
		std::cin >> input;
		sum += input - 48;
	}

	std::cout << sum << std::endl;
	return 0;
}
