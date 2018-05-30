#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <vector>

int main()
{
	int N;
	std::cin >> N;

	double sum = 0;
	std::vector<int> vector;
	std::map<int, int> cnt;
	int cntMax = 0;
	int min = 4000;
	int max = -4000;
	for (int i = 0; i < N; ++i)
	{
		int n;
		std::cin >> n;
		vector.push_back(n);

		sum += n;

		std::map<int, int>::iterator iterator = cnt.find(n);
		if (iterator == cnt.end())
			cnt.insert(std::pair<int, int>(n, 1));
		else
			++cnt.at(n);

		if (cnt.at(n) > cntMax)
			cntMax = cnt.at(n);

		if (n > max)
			max = n;

		if (n < min)
			min = n;
	}

	std::vector<int> modes;
	for (auto n : cnt)
	{
		if (n.second == cntMax)
			modes.push_back(n.first);
	}

	std::sort(vector.begin(), vector.end());

	int average;
	if (sum / N > 0)
		average = std::floor(sum / N + 0.5);
	else
		average = std::ceil(sum / N - 0.5);

	std::cout << average << std::endl;
	std::cout << vector.at(N / 2) << std::endl;
	std::cout << (modes.size() > 1 ? modes.at(1) : modes.at(0)) << std::endl;
	std::cout << max - min << std::endl;
	return 0;
}
