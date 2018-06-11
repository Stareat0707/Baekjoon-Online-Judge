#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	int result = 1;
	for (int i = 2; i <= N; ++i)
		result *= i;

	std::cout << result << std::endl;
	return 0;
}
