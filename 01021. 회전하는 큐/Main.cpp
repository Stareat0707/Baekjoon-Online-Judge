#include <iostream>
#include <deque>

int main()
{
	int N, M;
	std::cin >> N >> M;

	std::deque<int> deque;
	for (int i = 0; i < N; ++i)
	{
		deque.push_back(i + 1);
	}

	int count = 0;
	for (int i = 0; i < M; ++i)
	{
		int n;
		std::cin >> n;

		bool direction = false;
		for (int j = 0; j < deque.size(); ++j)
		{
			if (deque.at(j) == n)
				direction = (j < deque.size() - j ? true : false);
		}

		while (deque.front() != n)
		{
			if (direction)
			{
				deque.push_back(deque.front());
				deque.pop_front();
			}
			else
			{
				deque.push_front(deque.back());
				deque.pop_back();
			}

			++count;
		}

		deque.pop_front();
	}

	std::cout << count << std::endl;
	return 0;
}
