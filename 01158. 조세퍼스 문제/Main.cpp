#include <iostream>
#include <vector>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::vector<int> vector;
	for (int i = 0; i < N; ++i)
		vector.push_back(i + 1);

	std::cout << '<';
	for (int i = --M; !vector.empty(); i += M)
	{
		i %= vector.size();
		std::cout << *(vector.begin() + i);
		vector.erase((vector.begin() + i));

		if (!vector.empty())
			std::cout << ", ";
	}

	std::cout << '>' << std::endl;
	return 0;
}
