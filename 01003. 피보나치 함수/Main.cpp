#include <iostream>

struct Structure
{
	int zero;
	int one;
};

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		int N;
		std::cin >> N;

		Structure* arr = new Structure[N + 1];
		arr[0] = Structure{ 1, 0 };
		arr[1] = Structure{ 0, 1 };

		for (int i = 2; i <= N; ++i)
			arr[i] = Structure{ arr[i - 1].zero + arr[i - 2].zero, arr[i - 1].one + arr[i - 2].one };

		std::cout << arr[N].zero << ' ' << arr[N].one << std::endl;

		delete[] arr;
	}

	return 0;
}
