#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int* nArray = new int[n];
	int m = 0;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> nArray[i];
		if (nArray[i] > m)
			m = nArray[i];
	}

	double sum = 0;
	for (int i = 0; i < n; ++i)
		sum += (double)nArray[i] / (double)m * 100.0;

	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << sum / n << std::endl;
	return 0;
}
