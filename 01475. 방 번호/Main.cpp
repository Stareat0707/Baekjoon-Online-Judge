#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void addNumberSet(std::vector<int>& vector, int& cnt)
{
	for (int i = 0; i < 10; ++i)
		vector.push_back(i);

	++cnt;
}

int main()
{
	int N;
	std::cin >> N;

	int cnt = 0;
	std::vector<int> vector;
	addNumberSet(vector, cnt);

	while (N >= 1)
	{
		int number = N % 10;
		std::vector<int>::iterator iterator = std::find(vector.begin(), vector.end(), number);
		if (iterator != vector.end())
			vector.erase(iterator);
		else if (number == 6 && (iterator = std::find(vector.begin(), vector.end(), 9)) != vector.end())
			vector.erase(iterator);
		else if (number == 9 && (iterator = std::find(vector.begin(), vector.end(), 6)) != vector.end())
			vector.erase(iterator);
		else
		{
			addNumberSet(vector, cnt);
			continue;
		}

		N /= 10;
	}

	std::cout << cnt << std::endl;
	return 0;
}
