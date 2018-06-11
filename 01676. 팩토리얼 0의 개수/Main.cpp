#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	int count = 0;
	for (int i = 5; i <= N; i += 5)
	{
		int j = i;
		while (j % 5 == 0)
		{
			j /= 5;
			++count;
		}
	}

	std::cout << count << std::endl;
	return 0;
}
