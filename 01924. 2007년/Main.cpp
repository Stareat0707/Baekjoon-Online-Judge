#include <iostream>

void printDayOfTheWeek(int dayOfTheWeek)
{
	switch (dayOfTheWeek)
	{
	case 0:
		std::cout << "MON" << std::endl;
		break;
	case 1:
		std::cout << "TUE" << std::endl;
		break;
	case 2:
		std::cout << "WED" << std::endl;
		break;
	case 3:
		std::cout << "THU" << std::endl;
		break;
	case 4:
		std::cout << "FRI" << std::endl;
		break;
	case 5:
		std::cout << "SAT" << std::endl;
		break;
	case 6:
		std::cout << "SUN" << std::endl;
		break;
	}
}

int main()
{
	int x, y;
	std::cin >> x >> y;

	int dayOfTheWeek = 0;
	for (int i = 1; i <= 12; ++i)
	{
		int maxDays;
		switch (i)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			maxDays = 31;
			break;
		case 2:
			maxDays = 28;
			break;
		default:
			maxDays = 30;
		}

		for (int j = 1; j <= maxDays; ++j)
		{
			if (x == i && y == j)
			{
				printDayOfTheWeek(dayOfTheWeek);
				return 0;
			}

			++dayOfTheWeek;
			if (dayOfTheWeek > 6)
				dayOfTheWeek = 0;
		}
	}

	return 0;
}
