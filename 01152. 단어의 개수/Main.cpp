#include <iostream>
#include <string>

int main()
{
	std::string sentence;
	std::getline(std::cin, sentence);

	int nWord = 0;
	bool bWord = false;
	for (auto& c : sentence)
	{
		if (c == ' ' && bWord)
		{
			++nWord;
			bWord = false;
		}
		else if (c != ' ')
		{
			bWord = true;
		}
	}
	if (bWord)
		++nWord;

	std::cout << nWord << std::endl;
	return 0;
}
