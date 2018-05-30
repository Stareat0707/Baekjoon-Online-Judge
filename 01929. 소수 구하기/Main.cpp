#include <iostream>

int main()
{
	int M, N;
	std::cin >> M >> N;

	if (N < 2)
		return 0;

	if (M < 2)
		M = 2;

	bool* eratos = new bool[N + 1];
	for (int i = 2; i <= N; ++i)
		eratos[i] = true;

	for (int i = 2; i * i <= N; ++i)
	{
		if (eratos[i])
		{
			for (int j = i * i; j <= N; j += i)
				eratos[j] = false;
		}

		if (i == 999)
			continue;
	}

	for (int i = M; i <= N; ++i)
	{
		if (eratos[i])
			std::cout << i << '\n';
	}
	return 0;
}
