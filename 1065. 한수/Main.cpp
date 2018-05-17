#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int cnt = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (i < 100)
			++cnt;
		else if (i < 1000)
		{
			if (i / 100 % 10 - i / 10 % 10 == i / 10 % 10 - i % 10)
				++cnt;
		}
	}

	std::cout << cnt << std::endl;
	return 0;
}
