#include <iostream>

int main()
{
	int N, K;
	std::cin >> N >> K;

	int* bc = new int[(N + 1) * (N + 1)];
	for (int i = 0; i <= N; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (j == 0 || i == j)
				bc[(N + 1) * i + j] = 1;
			else
				bc[(N + 1) * i + j] = (bc[(N + 1) * (i - 1) + (j - 1)] % 10007 + bc[(N + 1) * (i - 1) + j] % 10007) % 10007;
		}
	}

	std::cout << bc[(N + 1) * N + K] % 10007 << std::endl;
	delete[] bc;
	return 0;
}
