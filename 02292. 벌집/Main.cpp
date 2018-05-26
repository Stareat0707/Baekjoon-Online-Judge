#include <iostream>

int main()
{
	int n = 0;
	std::cin >> n;

	int cnt = 1;
	for (int range = 1; n > range; ++cnt)
		range += cnt * 6;

	std::cout << cnt << std::endl;
	return 0;
}
