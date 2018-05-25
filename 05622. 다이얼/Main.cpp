#include <iostream>
#include <string>

int main()
{
	std::string word;
	std::cin >> word;

	int totalSec = 0;
	for (auto& c : word)
	{
		switch (c)
		{
		case 'A':
		case 'B':
		case 'C':
			totalSec += 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			totalSec += 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			totalSec += 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			totalSec += 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			totalSec += 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			totalSec += 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			totalSec += 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			totalSec += 10;
		}
	}

	std::cout << totalSec << std::endl;
	return 0;
}
