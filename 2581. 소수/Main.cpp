#include <iostream>

int main()
{
	int M, N;
	std::cin >> M >> N;

	if (M < 2)
		M = 2;

	int sum = 0;
	int min = 10000;
	for (int i = M; i <= N; ++i)
	{
		bool flag = false;
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				flag = true;
				break;
			}
		}

		if (flag)
			continue;

		sum += i;
		if (i < min)
			min = i;
	}

	if (sum == 0)
	{
		std::cout << -1 << std::endl;
		return 0;
	}

	std::cout << sum << std::endl;
	std::cout << min << std::endl;
	return 0;
}
