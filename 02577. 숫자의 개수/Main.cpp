#include <iostream>
#include <array>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;
	int result = a * b * c;
	
	std::array<int, 10> nArray;
	nArray.fill(0);
	do
	{
		++nArray[result % 10];
		result /= 10;
	} while (result >= 1);

	for (auto& n : nArray)
	{
		std::cout << n << std::endl;
	}
	return 0;
}
