#include <cstdio>

int main()
{
	while (true)
	{
		char c = std::getchar();
		if (c == -1)
			break;
		std::putchar(c);
	}

	return 0;
}
