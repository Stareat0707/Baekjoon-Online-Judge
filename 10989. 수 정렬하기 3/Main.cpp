#include <iostream>
#include <vector>

int main()
{
	int N;
	std::cin >> N;

	std::vector<int> cnt;
	for (int i = 0; i < N; ++i)
	{
		short n;
		std::cin >> n;

		while (cnt.size() < n)
			cnt.push_back(0);

		++cnt.at(n - 1);
	}

	int printNumber = 1;
	for (auto n : cnt)
	{
		for (int i = 0; i < n; ++i)
			std::cout << printNumber << '\n';

		++printNumber;
	}
	return 0;
}
