#include <iostream>
#include <vector>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int k;
		std::cin >> k;
		++k;
		int n;
		std::cin >> n;

		std::vector<int> vector;
		for (int i = 0; i < k * n; ++i)
		{
			if (i < n)
			{
				vector.push_back(i + 1);
				continue;
			}

			if (i % n == 0)
			{
				vector.push_back(1);
				continue;
			}

			int sum = 0;
			for (int j = n * (i / n) - n; j <= i - n; ++j)
				sum += vector.at(j);

			vector.push_back(sum);
		}

		std::cout << vector.back() << std::endl;
	}
	return 0;
}
