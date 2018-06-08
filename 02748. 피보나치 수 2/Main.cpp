#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	long long* fibonacci = new long long[n + 1];
	fibonacci[0] = 0;
	fibonacci[1] = 1;
	for (int i = 2; i <= n; ++i)
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

	std::cout << fibonacci[n] << std::endl;
	return 0;
}
