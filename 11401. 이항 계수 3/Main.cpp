#include <iostream>

long long power(long long x, long long y)
{
	long long result = 1;
	while (y > 0)
	{
		if (y % 2 != 0)
		{
			result *= x;
			result %= 1000000007;
		}

		x *= x;
		x %= 1000000007;
		y /= 2;
	}

	return result;
}

int main()
{
	int N, K;
	std::cin >> N >> K;

	long long* factorial = new long long[N + 1]{ 1 };
	for (int i = 1; i <= N; ++i)
		factorial[i] = factorial[i - 1] * i % 1000000007;

	long long A = factorial[N];
	long long B = factorial[K] * factorial[N - K] % 1000000007;
	B = power(B, 1000000005) % 1000000007;

	std::cout<< A * B % 1000000007 <<std::endl;

	delete[] factorial;
	return 0;
}
