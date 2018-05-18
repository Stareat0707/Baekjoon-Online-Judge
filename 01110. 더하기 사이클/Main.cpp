#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int cycle = 0;
	int newNum = n;
	do
	{
		newNum = (newNum / 10 + newNum % 10) % 10 + newNum % 10 * 10;
		++cycle;
	} while (newNum != n);

	std::cout << cycle << std::endl;
	return 0;
}
