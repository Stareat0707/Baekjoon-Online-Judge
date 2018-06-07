#include <iostream>
#include <vector>

int main()
{
	int testCase;
	std::cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		int N, M;
		std::cin >> N >> M;

		std::vector<int> vector;
		for (int j = 0; j < N; ++j)
		{
			int priority;
			std::cin >> priority;
			vector.push_back(priority);
		}

		int count = 0;
		while (!vector.empty() && M >= 0)
		{
			bool flag = false;
			for (auto& n : vector)
			{
				if (vector.front() < n)
				{
					vector.push_back(vector.front());

					if (M == 0)
						M = vector.size() - 1;

					flag = true;
					break;
				}
			}

			vector.erase(vector.begin());
			--M;

			if (!flag)
				++count;
		}
		
		std::cout << count << '\n';
	}

	return 0;
}
