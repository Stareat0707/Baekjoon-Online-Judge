#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	int cnt = 0;
	for (int i = 0; i < N; ++i)
	{
		int n;
		std::cin >> n;

		if (n < 2)
			continue;

		bool flag = false;
		for (int j = 2; j < n; ++j)
		{
			if (n % j == 0)
			{
				flag = true;
				break;
			}
		}

		if (flag)
			continue;

		++cnt;
	}

	std::cout << cnt << std::endl;
	return 0;
}
