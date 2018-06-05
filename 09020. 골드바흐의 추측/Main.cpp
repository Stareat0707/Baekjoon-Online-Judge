#include <iostream>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int n;
		std::cin >> n;

		bool* eratos = new bool[n + 1];
		for (int j = 2; j <= n; ++j)
			eratos[j] = true;

		for (int j = 2; j * j <= n; ++j)
		{
			if (eratos[j])
			{
				for (int k = j * j; k <= n; k += j)
					eratos[k] = false;
			}
		}

		std::pair<int, int> goldbachPartition(0, n);
		for (int j = 2; j < n / 2 + 1; ++j)
		{
			if (eratos[j] && eratos[n - j] && goldbachPartition.second - goldbachPartition.first > n - j * 2)
				goldbachPartition = std::pair<int, int>(j, n - j);
		}

		delete[] eratos;

		std::cout << goldbachPartition.first << ' ' << goldbachPartition.second << std::endl;
	}

	return 0;
}
