#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		int score;
		std::cin >> score;
		sum += (score < 40 ? 40 : score);
	}
	
	std::cout << sum / 5 << std::endl;
	return 0;
}
