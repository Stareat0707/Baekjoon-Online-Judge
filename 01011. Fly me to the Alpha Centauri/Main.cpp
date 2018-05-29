#include <iostream>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int x, y;
		std::cin >> x >> y;

		int cnt = 0;
		int range = 1;
		while (true)
		{
			x += range;
			y -= range;
			cnt += 2;

			if (x >= y)
			{
				if (x - y >= range)
					--cnt;
				break;
			}

			++range;
		}

		std::cout << cnt << std::endl;
	}

	return 0;
}
