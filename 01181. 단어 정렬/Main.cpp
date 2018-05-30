#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
	int N;
	std::cin >> N;

	std::vector<std::string> history;
	std::vector<std::pair<int, std::string>> words;
	for (int i = 0; i < N; ++i)
	{
		std::string word;
		std::cin >> word;

		if (std::find(history.begin(), history.end(), word) != history.end())
			continue;

		words.push_back(std::pair<int, std::string>(word.size(), word));
		history.push_back(word);
	}

	std::sort(words.begin(), words.end());

	for (auto& word : words)
	{
		std::cout << word.second << std::endl;
	}

	return 0;
}
