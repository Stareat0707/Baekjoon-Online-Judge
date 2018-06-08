#include <iostream>

int fibonacci[1500000] = { 0, 1 };

int main()
{
	long long n;
	std::cin >> n;

	for (int i = 2; i <= n % 1500000; ++i)
		fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % 1000000;

	std::cout << fibonacci[n % 1500000] << std::endl;
	return 0;
}
