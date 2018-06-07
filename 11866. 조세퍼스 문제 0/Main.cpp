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

	int m = M;
	while (!vector.empty())
	{
		if (--m == 0)
		{
			std::cout << vector.at(0);

			if (vector.size() > 1)
				std::cout << ", ";

			m = M;
		}
		else
			vector.push_back(vector.at(0));

		vector.erase(vector.begin());
	}

	std::cout << '>' << std::endl;
	return 0;
}
