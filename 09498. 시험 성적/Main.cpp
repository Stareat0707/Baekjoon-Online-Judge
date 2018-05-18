#include <iostream>

int main()
{
	int testScore;
	std::cin >> testScore;

	if (testScore >= 90)
		std::cout << 'A' << std::endl;
	else if (testScore >= 80)
		std::cout << 'B' << std::endl;
	else if (testScore >= 70)
		std::cout << 'C' << std::endl;
	else if (testScore >= 60)
		std::cout << 'D' << std::endl;
	else
		std::cout << 'F' << std::endl;

	return 0;
}
