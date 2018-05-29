#include <iostream>

int gcd(int a, int b)
{
	return (a % b == 0 ? b : gcd(b, a % b));
}

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int M, N, x, y;
		std::cin >> M >> N >> x >> y;

		int lcm = M * N / gcd(M, N);

		if (M == x && N == y)
		{
			std::cout << lcm << std::endl;
			continue;
		}

		int tempY = x % N;
		if (tempY == 0)
			tempY = N;
		int cnt = x;
		while (cnt < lcm)
		{
			if (tempY == y)
			{
				std::cout << cnt << std::endl;
				break;
			}

			tempY += M;
			tempY %= N;
			if (tempY == 0)
				tempY = N;
			cnt += M;
		}

		if (cnt >= lcm)
			std::cout << -1 << std::endl;
	}

	return 0;
}
