#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main()
{
	std::string word;
	std::cin >> word;

	std::unordered_map<char, int> map;

	for (auto& c : word)
	{
		c = toupper(c);

		std::unordered_map<char, int>::iterator iterator = map.find(c);
		if (iterator == map.end())
			map.insert(std::unordered_map<char, int>::value_type(c, 1));
		else
			++iterator->second;
	}

	int max = 0;
	for (auto& item : map)
	{
		if (item.second > max)
			max = item.second;
	}

	std::vector<char> vector;
	for (auto& item : map)
	{
		if (item.second == max)
			vector.push_back(item.first);
	}

	if (vector.size() == 1)
		std::cout << vector.at(0) << std::endl;
	else
		std::cout << '?' << std::endl;

	return 0;
}
