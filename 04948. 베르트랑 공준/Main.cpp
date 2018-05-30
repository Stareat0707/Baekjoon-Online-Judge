#include <iostream>

int main()
{
	while (true)
	{
		int n;
		std::cin >> n;

		if (n == 0)
			return 0;

		bool* eratos = new bool[n * 2 + 1];
		for (int i = 2; i <= n * 2; ++i)
			eratos[i] = true;

		for (int i = 2; i * i <= n * 2; ++i)
		{
			if (eratos[i])
			{
				for (int j = i * i; j <= n * 2; j += i)
					eratos[j] = false;
			}
		}

		int count = 0;
		for (int i = n + 1; i <= n * 2; ++i)
		{
			if (i < 2)
				continue;

			if (eratos[i])
				++count;
		}

		std::cout << count << '\n';
	}
}
