#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;

	int nCroatiaAlphabet = 0;
	for (int i = 0; i < input.size(); ++i)
	{
		int prevI = i;
		switch (input.at(i))
		{
		case 'c':
			if (input.substr(i, 2) == "c=" || input.substr(i, 2) == "c-")
				++i;
			break;
		case 'd':
			if (input.substr(i, 3) == "dz=")
				i += 2;
			else if (input.substr(i, 2) == "d-")
				++i;
			break;
		case 'l':
			if (input.substr(i, 2) == "lj")
				++i;
			break;
		case 'n':
			if (input.substr(i, 2) == "nj")
				++i;
			break;
		case 's':
			if (input.substr(i, 2) == "s=")
				++i;
			break;
		case 'z':
			if (input.substr(i, 2) == "z=")
				++i;
		}
		if (prevI == i && (input.at(i) == '-' || input.at(i) == '='))
			continue;
		++nCroatiaAlphabet;
	}

	std::cout << nCroatiaAlphabet << std::endl;
	return 0;
}
