#include <iostream>
#include <random>

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	int x = gen() % 64 + 1;
	std::cout << x << std::endl;

	int num = 1;
	int count = 0;
	while (x > 0)
	{
		if (x % 2 == 1)
			++count;
		x /= 2;
	}

	std::cout << count << std::endl;
	return 0;
}
