#include <iostream>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int H, W, N;
		std::cin >> H >> W >> N;

		int y = (N % H == 0 ? H : N % H);
		int x = (N % H == 0 ? N / H : N / H + 1);
		std::cout << y;
		std::cout.width(2);
		std::cout.fill('0');
		std::cout << x << std::endl;
	}

	return 0;
}
