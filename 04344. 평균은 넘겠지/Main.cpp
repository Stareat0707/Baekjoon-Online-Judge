#include <iostream>

int main()
{
	int c;
	std::cin >> c;

	for (int i = 0; i < c; ++i)
	{
		int n;
		std::cin >> n;

		int sum = 0;
		int* scores = new int[n];
		for (int j = 0; j < n; ++j)
		{
			std::cin >> scores[j];

			sum += scores[j];
		}

		double average = (double)sum / n;

		int cnt = 0;
		for (int j = 0; j < n; ++j)
		{
			if (scores[j] > average)
				++cnt;
		}

		std::cout << std::fixed;
		std::cout.precision(3);
		std::cout << (double)cnt / n * 100 << '%' << std::endl;

		delete scores;
		scores = 0;
	}

	return 0;
}
