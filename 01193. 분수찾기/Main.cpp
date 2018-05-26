#include <iostream>

int main()
{
	int x = 0;
	std::cin >> x;

	int numerator = 1;
	int denominator = 1;
	bool flag = false;
	for (int i = 1; i < x; ++i)
	{
		if (flag && denominator == 1)
		{
			++numerator;
			flag = !flag;
			continue;
		}
		else if (!flag && numerator == 1)
		{
			++denominator;
			flag = !flag;
			continue;
		}

		if (flag)
		{
			++numerator;
			--denominator;
		}
		else
		{
			--numerator;
			++denominator;
		}
	}
	std::cout << numerator << '/' << denominator << std::endl;
	return 0;
}
